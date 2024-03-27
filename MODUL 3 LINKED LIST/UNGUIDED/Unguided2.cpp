
#include <iostream>
#include <iomanip> 
using namespace std;
// Febrian Falih Alwafi
// 2311102181
// S1 IF-11-E

// Deklarasi Struct Node
class Node {
public:
    string produk_181;
    int harga_181;
    Node* prev_181;
    Node* next_181;
};

// Deklarasi Class DoublyLinkedList
class DoublyLinkedList {
public:
    Node* head_181;
    Node* tail_181;

    // Constructor
    DoublyLinkedList() {
        head_181 = nullptr;
        tail_181 = nullptr;
    }

    // Prosedur untuk menambahkan data di depan
    void Push(int harga_181, string produk_181) {
        Node* newNode_181 = new Node;
        newNode_181->harga_181 = harga_181;
        newNode_181->produk_181 = produk_181;
        newNode_181->prev_181 = nullptr;
        newNode_181->next_181 = head_181;

        if (head_181 != nullptr) {
            head_181->prev_181 = newNode_181;
        }
        else {
            tail_181 = newNode_181;
        }

        head_181 = newNode_181;
    }

    // Prosedur untuk menambahkan data pada posisi tertentu
    void PushPosition(int posisi_181, int harga_181, string produk_181) {
        if (posisi_181 < 1) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        Node* newNode_181 = new Node;
        newNode_181->harga_181 = harga_181;
        newNode_181->produk_181 = produk_181;
        newNode_181->prev_181 = nullptr;
        newNode_181->next_181 = nullptr;

        if (posisi_181 == 1) {
            newNode_181->next_181 = head_181;
            if (head_181 != nullptr)
                head_181->prev_181 = newNode_181;
            else
                tail_181 = newNode_181;
            head_181 = newNode_181;
            return;
        }

        Node* saatIni_181 = head_181;
        for (int i = 1; i < posisi_181 - 1 && saatIni_181 != nullptr; ++i)
            saatIni_181 = saatIni_181->next_181;

        if (saatIni_181 == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            delete newNode_181;
            return;
        }

        newNode_181->next_181 = saatIni_181->next_181;
        newNode_181->prev_181 = saatIni_181;
        if (saatIni_181->next_181 != nullptr)
            saatIni_181->next_181->prev_181 = newNode_181;
        else
            tail_181 = newNode_181;
        saatIni_181->next_181 = newNode_181;
    }

    // Prosedur untuk menghapus data di depan
    void Pop() {
        if (head_181 == nullptr) {
            cout << "Tidak ada data yang bisa dihapus!" << endl;
            return;
        }

        Node* temp_181 = head_181;
        head_181 = head_181->next_181;

        if (head_181 != nullptr) {
            head_181->prev_181 = nullptr;
        }
        else {
            tail_181 = nullptr;
        }

        delete temp_181;
    }

    // Prosedur untuk menghapus data pada posisi tertentu
    void PopPosition(int posisi_181) {
        if (head_181 == nullptr) {
            cout << "Tidak ada data yang bisa dihapus!" << endl;
            return;
        }

        Node* temp_181 = head_181;
        for (int i = 1; i < posisi_181 && temp_181 != nullptr; ++i) {
            temp_181 = temp_181->next_181;
        }

        if (temp_181 == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        if (temp_181->prev_181 != nullptr) {
            temp_181->prev_181->next_181 = temp_181->next_181;
        } else {
            head_181 = temp_181->next_181;
        }

        if (temp_181->next_181 != nullptr) {
            temp_181->next_181->prev_181 = temp_181->prev_181;
        } else {
            tail_181 = temp_181->prev_181;
        }

        delete temp_181;
    }

    // Fungsi untuk mengupdate data
    bool Update(string oldProduk_181, string newProduk_181, int newharga_181) {
        Node* saatIni_181 = head_181;

        while (saatIni_181 != nullptr) {
            if (saatIni_181->produk_181 == oldProduk_181) {
                saatIni_181->produk_181 = newProduk_181;
                saatIni_181->harga_181 = newharga_181;
                return true;
            }
            saatIni_181 = saatIni_181->next_181;
        }

        return false;
    }

    // Prosedur untuk menghapus semua data
    void DeleteAll() {
        Node* saatIni_181 = head_181;

        while (saatIni_181 != nullptr) {
            Node* temp_181 = saatIni_181;
            saatIni_181 = saatIni_181->next_181;
            delete temp_181;
        }

        head_181 = nullptr;
        tail_181 = nullptr;
    }

    // Prosedur untuk menampilkan data
    void Display_181() {
        Node* saatIni_181 = head_181;

        cout << left << setw(20) << "[ Nama Produk ]" << setw(10) << "[ Harga ]" << endl;

        while (saatIni_181 != nullptr) {
            cout << setw(20) << saatIni_181->produk_181 << setw(10) << saatIni_181->harga_181 << endl;
            saatIni_181 = saatIni_181->next_181;
        }

        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    cout << "\n== MENU TOKO SKINCARE PURWOKERTO BY FEBRIAN FALIH ALWAFI ==" << endl;

    // Inisialisasi data awal
    list.Push(30000, "Hanasui");
    list.Push(50000, "Wardah");
    list.Push(100000, "Skintific");
    list.Push(150000, "Somethinc");
    list.Push(60000, "Originote");
    list.Display_181(); 

    // Loop untuk menu interaktif
    while (true) {
        cout << "\nToko Skincare Purwokerto" << endl;
        cout << "   1. Tambah Data" << endl;
        cout << "   2. Hapus Data" << endl;
        cout << "   3. Update Data" << endl;
        cout << "   4. Tambah Data pada Posisi Tertentu" << endl;
        cout << "   5. Hapus Data pada Posisi Tertentu" << endl;
        cout << "   6. Hapus Semua Data" << endl;
        cout << "   7. Tampilkan Data" << endl;
        cout << "   8. Exit" << endl;

        int pilihan_181;
        cout << "Pilih Nomor: ";
        cin >> pilihan_181;

        switch (pilihan_181) {
            case 1: {
                int harga_181;
                string produk_181;

                cout << "\nTAMBAH PRODUK SKINCARE" << endl;
                cout << "Nama produk: ";
                cin.ignore();
                getline(cin, produk_181);
                cout << "Harga produk: ";
                cin >> harga_181;
                list.Push(harga_181, produk_181);
                cout << "Produk berhasil ditambahkan!" << endl;
                list.Display_181(); 
                break;
            }

            case 2: {
                list.Pop();
                cout << "PRODUK PALING ATAS BERHASIL DIHAPUS!" << endl;
                list.Display_181(); 
                break;
            }

            case 3: {
                string oldProduk_181, newProduk_181;
                int newharga_181;

                cout << "\nUPDATE DATA PRODUK SKINCARE" << endl;
                cout << "Masukkan nama produk yang ingin diubah: ";
                cin.ignore();
                getline(cin, oldProduk_181);
                cout << "Masukkan nama produk baru: ";
                getline(cin, newProduk_181);
                cout << "Masukkan harga baru: ";
                cin >> newharga_181;

                bool update_181 = list.Update(oldProduk_181, newProduk_181, newharga_181);
                if (update_181) {
                    cout << "Data berhasil diperbarui!" << endl;
                } else {
                    cout << "Data tidak ditemukan!" << endl;
                }
                list.Display_181(); 
                break;
            }

            case 4: {
                int posisi_181, harga_181;
                string produk_181;

                cout << "\nTAMBAH PRODUK SKINCARE PADA POSISI TERTENTU" << endl;
                cout << "Masukkan posisi untuk produk baru: ";
                cin >> posisi_181;
                cout << "Nama produk: ";
                cin.ignore();
                getline(cin, produk_181);
                cout << "Harga produk: ";
                cin >> harga_181;
                list.PushPosition(posisi_181, harga_181, produk_181);
                cout << "Produk berhasil ditambahkan pada posisi ke-" << posisi_181 << "!" << endl;
                list.Display_181(); 
                break;
            }

            case 5: {
                int posisi_181;

                cout << "\nHAPUS PRODUK SKINCARE PADA POSISI TERTENTU" << endl;
                cout << "Masukkan posisi untuk menghapus data: ";
                cin >> posisi_181;
                list.PopPosition(posisi_181);
                cout << "Data berhasil dihapus pada posisi ke-" << posisi_181 << "!" << endl;
                list.Display_181(); 
                break;
            }

            case 6: {
                list.DeleteAll();
                cout << "SEMUA DATA BERHASIL DI HAPUS!" << endl;
                list.Display_181(); 
                break;
            }

            case 7: {
                cout << "\nTAMPILAN DATA PRODUK TOKO SKINCARE PURWOKERTO SEKARANG" << endl;
                list.Display_181(); 
                break;
            }

            case 8: {
                cout << "Terimakasih telah menggunakan program ini!" << endl;
                return 0;
            }

            default: {
                cout << "Pilihan anda tidak valid!" << endl;
                break;
            }
        }
    }

    return 0;
}