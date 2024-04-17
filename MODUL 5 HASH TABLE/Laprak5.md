# <h1 align="center">Laporan Praktikum Modul 5_Hash Table</h1>
<h2 align="center">Febrian Falih Alwafi - 2311102181</h2>

###  TUJUAN PRAKTIKUM
a.	Mahasiswa mampu menjelaskan definisi dan konsep dari Hash Code</br>
b.	Mahasiswa mampu menerapkan Hash Code kedalam pemrograman

###  DASAR TEORI 
Hash Table adalah struktur data yang memetakan kunci ke nilai. Tabel hash menggunakan fungsi hash untuk menghitung indeks kunci. Anda dapat menyimpan nilai di lokasi yang sesuai berdasarkan indeks tabel hash. Keuntungan menggunakan tabel hash adalah waktu aksesnya yang sangat cepat. Sistem hash table bekerja dengan cara mengambil input kunci dan
memetakkannya ke nilai indeks array menggunakan fungsi hash. Kemudian, data disimpan pada posisi indeks array yang dihasilkan oleh fungsi hash. Ketika data perlu dicari, input kunci dijadikan sebagai parameter untuk fungsi hash, dan posisi indeks array yang dihasilkan digunakan untuk mencari data. Dalam kasus hash collision, di mana dua atau lebih data memiliki nilai hash yang sama, hashtable menyimpan data tersebut dalam slot yang sama dengan Teknik yang disebut chaining.</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/de11a102-37ff-4243-bcf1-b2a3cf202f68)
</br>

### Fungsi Hash Table
Fungsi hash membuat pemetaan antara kunci dan nilai, hal ini dilakukan
melalui penggunaan rumus matematika yang dikenal sebagai fungsi hash. Hasil
dari fungsi hash disebut sebagai nilai hash atau hash.

### Operasi Hash Table
1. Insertion:
Memasukkan data baru ke dalam hash table dengan memanggil fungsi hash
untuk menentukan posisi bucket yang tepat.
2. Deletion:
Menghapus data dari hash table dengan mencari data menggunakan fungsi
hash, dan kemudian menghapusnya dari bucket yang sesuai.
3. Searching:
Mencari data dalam hash table dengan memasukkan input kunci ke fungsi
hash untuk menentukan posisi bucket.
4. Update:
Memperbarui data dalam hash table dengan mencari data menggunakan
fungsi hash, dan kemudian memperbarui data yang ditemukan.
5. Traversal:
Melalui seluruh hash table untuk memproses semua data yang ada dalam
tabel.

### Collision Resolution
Keterbatasan tabel hash adalah jika dua angka dimasukkan ke dalam fungsi
hash menghasilkan nilai yang sama. Hal ini disebut dengan collision. Ada dua
teknik untuk menyelesaikan masalah ini diantaranya : </br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/77105f05-cef8-40f4-8def-1575ee5a137e)

1. Open Hashing (Chaining)
Metode chaining mengatasi collision dengan cara menyimpan semua
item data dengan nilai indeks yang sama ke dalam sebuah linked list. Setiap
node pada linked list merepresentasikan satu item data.
2. Closed Hashing</br>
● Linear Probing</br>
Pada saat terjadi collision, maka akan mencari posisi yang kosong di
bawah tempat terjadinya collision.</br>
● Quadratic Probing</br>
Penanganannya hampir sama dengan metode linear, hanya
lompatannya tidak satu-satu, tetapi quadratic ( 12, 22, 32, 42, ... )</br>
● Double Hashing</br>
Pada saat terjadi collision, terdapat fungsi hash yang kedua untuk
menentukan posisinya kembali.</br>

## Guided 

### 1.	Guided I

```C++
#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

// Fungsi hash sederhana
int hash_func(int key) {
    return key % MAX_SIZE;
}

// Struktur data untuk setiap node
struct Node {
    int key;
    int value;
    Node* next;
    Node(int key, int value) : key(key), value(value), next(nullptr) {}
};

// Class hash table
class HashTable {
private:
    Node** table;

public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
    }

    ~HashTable() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Insertion
    void insert(int key, int value) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }
        Node* node = new Node(key, value);
        node->next = table[index];
        table[index] = node;
    }

    // Searching
    int get(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;
    }

    // Deletion
    void remove(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Traversal
    void traverse() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                cout << current->key << ": " << current->value << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable ht;

    // Insertion
    ht.insert(1, 10);
    ht.insert(2, 20);
    ht.insert(3, 30);

    // Searching
    cout << "Get key 1: " << ht.get(1) << endl;
    cout << "Get key 4: " << ht.get(4) << endl;

    // Deletion
    ht.remove(4);

    // Traversal
    ht.traverse();

    return 0;
}
```

## Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/6f272729-36db-479e-b993-4eea909cbf59)</br>

Kode di atas adalah implementasi dari hash table menggunakan chaining untuk menangani kolisi, dengan menggunakan linked list sebagai struktur data untuk menyimpan elemen-elemennya. 

### 2.	Guided II

```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int TABLE_SIZE = 11;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];

public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);
        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;
    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah: " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah: " << employee_map.searchByName("Pastah") << endl;

    employee_map.remove("Mistah");

    cout << "Nomer Hp Mistah setelah dihapus: " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table: " << endl;
    employee_map.print();

    return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int TABLE_SIZE = 11;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];

public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);
        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;
    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah: " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah: " << employee_map.searchByName("Pastah") << endl;

    employee_map.remove("Mistah");

    cout << "Nomer Hp Mistah setelah dihapus: " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table: " << endl;
    employee_map.print();

    return 0;
}
```
## Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/4306cdb0-3cf3-460a-b7df-c01189ee4d7d)</br>

Program ini adalah implementasi sederhana dari tabel hash dalam bahasa pemrograman C++. Tabel hash digunakan untuk menyimpan pasangan nama dan nomor telepon karyawan.
1. Kelas HashNode: Merepresentasikan simpul (node) dalam tabel hash. Setiap simpul memiliki atribut nama dan nomor telepon.
2. Kelas HashMap: Merepresentasikan tabel hash itu sendiri. Ini memiliki fungsi hash untuk menghitung indeks tempat penyimpanan data, metode untuk menambahkan, menghapus, dan mencari data, serta metode untuk mencetak seluruh tabel hash.
3. Metode insert: Menambahkan pasangan nama dan nomor telepon ke dalam tabel hash. Jika nama sudah ada dalam tabel, nomor telepon yang terkait dengan nama tersebut diperbarui.

## Unguided

### 1. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan:</br> a. Setiap mahasiswa memiliki NIM dan nilai.</br> b. Program memiliki tampilan pilihan menu berisi poin C.</br> c. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).

```C++
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

```
## Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/fe77ee3a-67f9-4955-b36e-e2637c9e2615)
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/61522f5d-4935-4ef0-8b81-f2d4d30742b6)
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/137c5763-0f66-4f50-b319-69cbca2d37be)
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/77caaf1a-78ae-4a52-95af-b479698067b1)
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/b88d59e4-0980-4b93-a4f4-f1a9f18cdb55)
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/aaf80ca3-dc80-4c2f-b3be-1a27172c219a)
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/6167ab30-c1c6-45f1-9d5d-73704c6bee51)</br>

Kode di atas merupakan implementasi dari hash table dalam C++, digunakan untuk menyimpan data mahasiswa berdasarkan NIM. 
1.Fungsi Hash dan Struktur Data: Terdapat fungsi hash sederhana untuk menghasilkan indeks dari setiap NIM yang dimasukkan. Struktur data Mahasiswa181 digunakan untuk menyimpan informasi mahasiswa seperti NIM, nama, nilai, dan pointer ke node berikutnya.

2. Kelas HashTable: Kelas ini menyediakan operasi-operasi dasar pada hash table seperti penyisipan (Insert181), pencarian berdasarkan NIM (SearchNIM181), pencarian nilai dalam range tertentu (SearchNilai181), penghapusan berdasarkan NIM (Remove181), dan penelusuran seluruh data (Traverse181). Kelas ini juga memiliki konstruktor untuk inisialisasi dan destruktor untuk membersihkan memori yang dialokasikan.

3. Fungsi main: Program utama ini memberikan menu kepada pengguna untuk melakukan operasi-operasi pada hash table seperti menambah, menghapus, mencari, dan menampilkan data mahasiswa. Menu ini diimplementasikan menggunakan struktur switch-case yang memanggil metode-metode yang sesuai pada kelas HashTable.

### Refrensi
[1]. Prestiliano, Jasson. "Aplikasi Tabel Hash dalam Pengarsipan dan Pencarian Data." (2007).

[2]. Supriatna, Ade. "Penerapan Algoritma Hash pada Aplikasi Perpustakaan Kampus untuk Penataan Buku-buku dalam Rak." Jurnal Teknologi Informasi dan Komunikasi 9.1 (2016): 74-80.
