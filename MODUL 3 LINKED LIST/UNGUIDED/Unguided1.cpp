#include <iostream>
using namespace std;
// Febrian Falih Alwafi
// 2311102181
// S1F11E

struct Node {
    string nama_181;
    int usia_181;
    Node* next_181;
};

Node* head_181 = nullptr;

void tampilkanList_181() {
    cout << "[ Nama ]" << "\t" << "[ Usia ]" << endl;
    Node* saatIni_181 = head_181;
    while (saatIni_181 != nullptr) {
        cout << saatIni_181->nama_181 << "\t\t" << saatIni_181->usia_181 << endl;
        saatIni_181 = saatIni_181->next_181;
    }
}

void insertDepan_181(string nama_181, int usia_181) {
    Node* baru_181 = new Node;
    baru_181->nama_181 = nama_181;
    baru_181->usia_181 = usia_181;
    baru_181->next_181 = head_181;
    head_181 = baru_181;
}

void insertBelakang_181(string nama_181, int usia_181) {
    Node* baru_181 = new Node;
    baru_181->nama_181 = nama_181;
    baru_181->usia_181 = usia_181;
    baru_181->next_181 = nullptr;
    if (head_181 == nullptr) {
        head_181 = baru_181;
    }
    else {
        Node* temp_181 = head_181;
        while (temp_181->next_181 != nullptr) {
            temp_181 = temp_181->next_181;
        }
        temp_181->next_181 = baru_181;
    }
}

void insertTengah_181(string nama_181, int usia_181, int posisi_181) {
    Node* baru_181 = new Node;
    baru_181->nama_181 = nama_181;
    baru_181->usia_181 = usia_181;
    Node* bantu_181 = head_181;
    for (int i_181 = 1; i_181 < posisi_181 - 1; i_181++) {
        if (bantu_181 != nullptr) {
            bantu_181 = bantu_181->next_181;
        }
    }
    if (bantu_181 != nullptr) {
        baru_181->next_181 = bantu_181->next_181;
        bantu_181->next_181 = baru_181;
    }
}

void hapusData_181(string nama_181) {
    Node* hapus_181 = head_181;
    Node* prev_181 = nullptr;
    while (hapus_181 != nullptr && hapus_181->nama_181 != nama_181) {
        prev_181 = hapus_181;
        hapus_181 = hapus_181->next_181;
    }
    if (hapus_181 == nullptr) {
        cout << "Data tidak ditemukan" << endl;
        return;
    }
    if (prev_181 == nullptr) {
        head_181 = hapus_181->next_181;
    }
    else {
        prev_181->next_181 = hapus_181->next_181;
    }
    delete hapus_181;
}

void ubahData_181(string nama_181, string newnama_181, int newusia_181) {
    Node* temp_181 = head_181;
    while (temp_181 != nullptr && temp_181->nama_181 != nama_181) {
        temp_181 = temp_181->next_181;
    }
    if (temp_181 != nullptr) {
        temp_181->nama_181 = newnama_181;
        temp_181->usia_181 = newusia_181;
    }
}

void tampilkanData() {
    Node* temp_181 = head_181;
    while (temp_181 != nullptr) {
        cout << temp_181->nama_181 << " " << temp_181->usia_181 << endl;
        temp_181 = temp_181->next_181;
    }
}

int main() {
    insertBelakang_181("Febrian", 19);
    insertBelakang_181("John", 19);
    insertBelakang_181("Jane", 20);
    insertBelakang_181("Michael", 18);
    insertBelakang_181("Yusuke", 19);
    insertBelakang_181("Akechi", 20);
    insertBelakang_181("Hoshino", 18);
    insertBelakang_181("Karin", 18);

    char pilihan_181;
    do {
        cout << "\nMenu:\n";
        cout << "a. Tampilkan data sesuai urutan tersedia (Data pertama adalah nama dan usia pengguna)\n";
        cout << "b. Hapus data Akechi\n";
        cout << "c. Tambahkan data berikut diantara John dan Jane : Futaba 18\n";
        cout << "d. Tambahkan data berikut diawal : igor 20\n";
        cout << "e. Ubah data Michael menjadi : Reyn 18\n";
        cout << "f. Tampilkan seluruh data\n";
        cout << "g. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan_181;

        switch (pilihan_181) {
            case 'a':
                cout << "\nData yang tersedia:\n";
                tampilkanList_181();
                break;
            case 'b':
                hapusData_181("Akechi");
                cout << "Data Akechi berhasil dihapus.\n";
                cout << "\nData yang tersedia setelah penghapusan:\n";
                tampilkanList_181();
                break;
            case 'c':
                insertTengah_181("Futaba", 18, 3); 
                cout << "Data Futaba berhasil ditambahkan.\n";
                cout << "\nData yang tersedia setelah penambahan:\n";
                tampilkanList_181();
                break;
            case 'd':
                insertDepan_181("Igor", 20);
                cout << "Data Igor berhasil ditambahkan di awal.\n";
                cout << "\nData yang tersedia setelah penambahan:\n";
                tampilkanList_181();
                break;
            case 'e':
                ubahData_181("Michael", "Reyn", 18);
                cout << "Data Michael berhasil diubah menjadi Reyn 18.\n";
                cout << "\nData yang tersedia setelah perubahan:\n";
                tampilkanList_181();
                break;
            case 'f':
                cout << "\nTampilan seluruh data sekarang:\n";
                tampilkanList_181();
                break;
            case 'g':
                cout << "Terima kasih, program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid, silakan coba lagi.\n";
                break;
        }
    } while (pilihan_181 != 'g');

    return 0;
}