#include <iostream>
#include <iomanip>
using namespace std;

//Nama : Febrian Falih Alwafi
//NIM  : 2311102181


const int MAX_SIZE = 10;

// Fungsi hash sederhana
int hash_func(long long key) {
    return key % MAX_SIZE;
}

// Struktur data untuk setiap node
struct Mahasiswa181 {
    long long NIM181;
    string Nama181; 
    int Nilai181;
    Mahasiswa181* next;
    Mahasiswa181(long long NIM181, string Nama181, int Nilai181) : NIM181(NIM181), Nama181(Nama181), Nilai181(Nilai181), next(nullptr) {} // Constructor
};

// Class hash table
class HashTable {
private:
    Mahasiswa181** table;

public:
    HashTable() { // Constructor
        table = new Mahasiswa181*[MAX_SIZE]();
    }

    ~HashTable() { // Destructor
        for (int i = 0; i < MAX_SIZE; i++) { // Menghapus semua node yang ada
            Mahasiswa181* current = table[i]; // Menunjuk ke index yang sudah ditentukan
            while (current != nullptr) {
                Mahasiswa181* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Insertion
    void Insert181(long long NIM181, string Nama181, int Nilai181) {
        int index = hash_func(NIM181); // Menggunakan fungsi hash untuk menentukan index
        Mahasiswa181* current = table[index]; // Menunjuk ke index yang sudah ditentukan
        while (current != nullptr) {
            if (current->NIM181 == NIM181) {
                current->Nilai181 = Nilai181;
                return;
            }
            current = current->next;
        }
        Mahasiswa181* mahasiswa = new Mahasiswa181(NIM181, Nama181, Nilai181);
        mahasiswa->next = table[index]; // Menunjuk ke node selanjutnya
        table[index] = mahasiswa; // Menunjuk ke node yang baru dibuat
    }

    // Searching by NIM181
    Mahasiswa181* SearchNIM181(long long NIM181) {
        int index = hash_func(NIM181); // Menggunakan fungsi hash untuk menentukan index
        Mahasiswa181* current = table[index]; // Menunjuk ke index yang sudah ditentukan
        while (current != nullptr) {
            if (current->NIM181 == NIM181) {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }

    // Searching by value range (80 - 90)
    void SearchNilai181(int StartScoreRange, int EndScoreRange) {
        cout << left << setw(15) << "-NAME-" << setw(20) << "-NIM-" << right << setw(2) << "-SCORE-" << endl;
        for (int i = 0; i < MAX_SIZE; i++) { // Untuk setiap index yang ada di tabel hash table ini, akan diiterasi satu per satu untuk mencari data yang sesuai dengan range yang diinginkan
            Mahasiswa181* current = table[i];
            while (current != nullptr) {
                if (current->Nilai181 >= StartScoreRange && current->Nilai181 <= EndScoreRange) { // Jika nilai mahasiswa berada di dalam range yang diinginkan
                    cout << left << setw(15) << current->Nama181 << setw(20) << current->NIM181 << right << setw(6) << current->Nilai181 << endl; // Maka data mahasiswa tersebut akan ditampilkan
                }
                current = current->next;
            }
        }
    }

    // Deletion
    void Remove181(long long NIM181) {
    int index = hash_func(NIM181); // Menggunakan fungsi hash untuk menentukan index
    Mahasiswa181* current = table[index]; // Menunjuk ke index yang sudah ditentukan
    Mahasiswa181* prev = nullptr;
    
    while (current != nullptr) { // Iterasi untuk mencari data yang akan dihapus
        if (current->NIM181 == NIM181) { // Jika data ditemukan
            if (prev == nullptr) { // Jika data yang akan dihapus berada di awal index
                table[index] = current->next; // Maka index akan menunjuk ke node selanjutnya
            } else {
                prev->next = current->next; // Jika data yang akan dihapus berada di tengah atau akhir index, maka node sebelumnya akan menunjuk ke node setelahnya
            }
            delete current; // Menghapus node yang diinginkan
            cout << "\nCongrats! NIM " << NIM181 << " has been erased from existence!" << endl;
            return;
        }
        prev = current;
        current = current->next;
    }
    
    // Jika NIM tidak ditemukan
    cout << "\nHuh? NIM " << NIM181 << " is nowhere to be found." << endl;
}


    // Traversal
    void Traverse181() {
        cout << left << setw(17) << "-NAME-" << setw(17) << "-NIM-" << setw(12) << "-SCORE-" << endl;
        for (int i = 0; i < MAX_SIZE; i++) { // Diiterasi untuk setiap index yang ada di tabel hash table ini
            Mahasiswa181* current = table[i]; // Menunjuk ke index yang sudah ditentukan
            while (current != nullptr) { // Iterasi untuk menampilkan data mahasiswa
                cout << left << setw(17) << current->Nama181 << setw(19) << current->NIM181 << setw(12) << current->Nilai181 << endl;
                current = current->next;
        }
    }
}
};

int main() {
    HashTable ht; // Membuat objek hash table

    cout << "\n-=-=-=- PROGRAM HASH TABLE DATA MAHASISWA -=-=-=-" << endl;

    while (true) {
        cout << "\n-=- MENU -=-";
        cout << "\n1. Add Data Mahasiswa";
        cout << "\n2. Delete Data Mahasiswa";
        cout << "\n3. Search Data by NIM Mahasiswa";
        cout << "\n4. Search Score by Range";
        cout << "\n5. Show Data Mahasiswa";
        cout << "\n6. Exit";
        cout << "\nChoose your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n-=-= ADD DATA MAHASISWA =-=-" << endl;
                long long NIM181;
                string Nama181;
                int Nilai181;
                cout << "Enter the student's name: ";
                cin.ignore(); // Untuk menghindari bug cin getline
                getline(cin, Nama181); // Menggunakan getline untuk input string yang mengandung spasi
                cout << "Enter the NIM: ";
                cin >> NIM181;
                cout << "Input the score: ";
                cin >> Nilai181;
                ht.Insert181(NIM181, Nama181, Nilai181); // Memasukkan data mahasiswa ke dalam hash table
                cout << "\nSuccess! You have added the student data of " << Nama181 << " with the NIM " << NIM181 << " and the score " << Nilai181 << endl;
                break;
            }
            case 2: {
                cout << "\n-=-= DELETE DATA MAHASISWA =-=-" << endl;
                long long NIM181;
                cout << "Input which NIM to delete: ";
                cin >> NIM181;
                ht.Remove181(NIM181); // Menghapus data mahasiswa dari hash table
                break;
            }
            case 3: {
                cout << "\n-=-= SEARCH DATA BY NIM MAHASISWA =-=-" << endl;
                long long NIM181;
                cout << "Input NIM to search for their data: ";
                cin >> NIM181;
                Mahasiswa181* mahasiswa = ht.SearchNIM181(NIM181); // Mencari data mahasiswa berdasarkan NIM
                if (mahasiswa != nullptr) // Jika data ditemukan
                    cout << "\nThe NIM " << NIM181 << " belongs to " << mahasiswa->Nama181 << " and has the score of " << mahasiswa->NIM181 << endl; // Maka data mahasiswa tersebut akan ditampilkan
                else
                    cout << "\nWhoops! Data not found!" << endl;
                break;
            }
            case 4: {
                cout << "\n-=-= SEARCH SCORE BY RANGE =-=-" << endl;
                int StartScoreRange, EndScoreRange;
                cout << "Range starts from Score: ";
                cin >> StartScoreRange;
                cout << "to Score: ";
                cin >> EndScoreRange;
                cout << "\nStudent(s) with the score between " << StartScoreRange << "-" << EndScoreRange << " are:\n";
                ht.SearchNilai181(StartScoreRange, EndScoreRange); // Mencari data mahasiswa berdasarkan range nilai
                break;
            }
            case 5: {
                cout << "\n" << right << setw(8) << "" << "-=-= MAHASISWA DATA =-=-" << endl;
                ht.Traverse181(); // Menampilkan data mahasiswa yang ada di hash table
                break;
            }
            case 6:
                cout << "\nThank you for using Destia program!";
                return 0;
            default:
                cout << "\nWhat did you just type..?" << endl;
        }
    }
}