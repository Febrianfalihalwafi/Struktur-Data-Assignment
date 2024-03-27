# <h1 align="center">Laporan Praktikum Modul 3 - SINGLE AND DOUBLE LINKED LIST</h1>
<h3 align="center">Febrian Falih Alwafi - 2311102181</h3>

# A.Dasar Teori 

1) Single Linked List</br>
Linked List merupakan suatu bentuk struktur data yang berisi kumpulan data yang disebut sebagai node yang tersusun secara sekuensial, saling sambung menyambung, dinamis, dan terbatas. Setiap elemen dalam linked list dihubungkan ke elemen lain melalui pointer. Masing-masing komponen sering disebut dengan simpul atau node atau verteks. Pointer adalah alamat elemen.
Setiap simpul pada dasarnya dibagi atas dua bagian pertama disebut bagian isi atau informasi atau data yang berisi nilai yang disimpan oleh simpul. Bagian kedua disebut bagian pointer yang berisi alamat dari node berikutnya atau sebelumnya. Dengan menggunakan struktur seperti ini, linked list dibentuk dengan cara menunjuk pointer next suatu elemen ke elemen yang mengikutinya. Pointer next pada elemen terakhir merupakan NULL, yang menunjukkan akhir dari suatu list. Elemen pada awal suatu list disebut head dan elemen terakhir dari suatu list disebut tail.</br>

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/81963b27-f8f7-4702-97cb-f3ee17968e62)</br>


Dalam operasi Single Linked List, umumnya dilakukan operasi penambahan dan penghapusan simpul pada awal atau akhir daftar, serta pencarian dan pengambilan nilai pada simpul tertentu dalam daftar. Karena struktur data ini hanya memerlukan satu pointer untuk setiap simpul, maka Single Linked List umumnya lebih efisien dalam penggunaan memori dibandingkan dengan jenis
Linked List lainnya, seperti Double Linked List dan Circular Linked List. Single linked list yang kedua adalah circular linked list. Perbedaan circularlinked list dan non circular linked adalah penunjuk next pada node terakhir pada circular linked list akan selalu merujuk ke node pertama.</br>

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/2327832c-476c-4675-988c-9fafa11cc944)</br>


2) Double Linked List
Double Linked List adalah struktur data Linked List yang mirip dengan Single Linked List, namun dengan tambahan satu pointer tambahan pada setiap simpul yaitu pointer prev yang menunjuk ke simpul sebelumnya. Dengan adanya pointer prev, Double Linked List memungkinkan untuk melakukan operasi penghapusan dan penambahan pada simpul mana saja secara efisien. Setiap simpul pada Double Linked List memiliki tiga elemen penting, yaitu elemen data (biasanya berupa nilai), pointer next yang menunjuk ke simpul berikutnya, dan pointer prev yang menunjuk ke simpul sebelumnya.</br>

Keuntungan dari Double Linked List adalah memungkinkan untuk melakukan operasi penghapusan dan penambahan pada simpul dimana saja dengan efisien, sehingga sangat berguna dalam implementasi beberapa algoritma yang membutuhkan operasi tersebut. Selain itu, Double Linked List juga memungkinkan kita untuk melakukan traversal pada list baik dari depan (head) maupun dari belakang (tail) dengan mudah. Namun, kekurangan dari Double Linked List adalah penggunaan memori yang lebih besar dibandingkan dengan Single Linked List, karena setiap simpul membutuhkan satu pointer tambahan. Selain itu, Double Linked List juga membutuhkan waktu eksekusi yang lebih lama dalam operasi penambahan dan penghapusan jika dibandingkan dengan Single Linked List.</br>

Representasi sebuah double linked list dapat dilihat pada gambar berikut ini:</br>

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/1cbfe40d-2471-418b-b556-6e9f15337382)</br>

Di dalam sebuah linked list, ada 2 pointer yang menjadi penunjuk utama, yakni pointer HEAD yang menunjuk pada node pertama di dalam linked list itu sendiri dan pointer TAIL yang menunjuk pada node paling akhir di dalam linked list. Sebuah linked list dikatakan kosong apabila isi pointer head adalah NULL. Selain itu, nilai pointer prev dari HEAD selalu NULL, karena merupakan data pertama. Begitu pula dengan pointer next dari TAIL yang selalu bernilai NULL sebagai penanda data terakhir.

# B. Guided

# 1. Latihan Single Linked List

```C++
#include <iostream> 
using namespace std; 

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR //Deklarasi Struct Node 
struct Node{ 
    //komponen/member 
    int data; 
    Node *next; 
  }; 
    
    Node *head; 
    Node *tail; 
  //Inisialisasi Node 
  void init(){ 
    head = NULL; 
    tail = NULL; 
} 

// Pengecekan 
bool isEmpty(){ 
    if (head == NULL) 
    return true; 
    else 
    return false; 
} 
//Tambah Depan 
void insertDepan(int nilai){ 
    //Buat Node baru 
    Node *baru = new Node; 
    baru->data = nilai; 
    baru->next = NULL; 
if (isEmpty() == true){ 
    head = tail = baru; 
    tail->next = NULL;
} 

else{ 
    baru->next = head; 
    head = baru; 
    } 
} 

//Tambah Belakang 
void insertBelakang(int nilai){ 
    //Buat Node baru 
    Node *baru = new Node; 
    baru->data = nilai; 
    baru->next = NULL; 
    if (isEmpty() == true){ 
        head = tail = baru; 
    tail->next = NULL; 
    } 
    else{ 
        tail->next = baru; 
        tail = baru; 
    } 
}

//Hitung Jumlah List 
int hitungList(){ 
    Node *hitung; 
    hitung = head; 
    int jumlah = 0; 
    while( hitung != NULL ){ 
        jumlah++; 
        hitung = hitung->next; 
    } 
    return jumlah; 
} 

//Tambah Tengah 
void insertTengah(int data, int posisi){ 
    if( posisi < 1 || posisi > hitungList() ){ 
        cout << "Posisi diluar jangkauan" << endl;
    } 
    else if( posisi == 1){ 
        cout << "Posisi bukan posisi tengah" << endl; 
} 
    else{ 
        Node *baru, *bantu; 
        baru = new Node(); 
        baru->data = data; 
// tranversing 
        bantu = head; 
        int nomor = 1; 
    while( nomor < posisi - 1 ){ 
        bantu = bantu->next; 
        nomor++; 
} 
        baru->next = bantu->next; 
        bantu->next = baru; 
    } 
} 

//Hapus Depan 
void hapusDepan() { 
    Node *hapus; 
if (isEmpty() == false){ 
    if (head->next != NULL){ 
        hapus = head; 
        head = head->next; 
        delete hapus; 
} 
    else{ 
        head = tail = NULL; 
    } 
} 
    else{ 
        cout << "List kosong!" << endl; 
    } 
}

//Hapus Belakang 
void hapusBelakang() { 
    Node *hapus;    
    Node *bantu; 
if (isEmpty() == false){ 
    if (head != tail){ 
        hapus = tail; 
        bantu = head; 
while (bantu->next != tail){ 
    bantu = bantu->next; 
} 
    tail = bantu; 
    tail->next = NULL; 
    delete hapus; 
} 
    else{ 
        head = tail = NULL; 
    } 
} 
    else{ 
        cout << "List kosong!" << endl; 
    } 
} 
//Hapus Tengah 
void hapusTengah(int posisi){ 
Node *hapus, *bantu, *bantu2; 
if( posisi < 1 || posisi > hitungList() ){ cout << "Posisi di luar jangkauan" << endl; } 
else if( posisi == 1){ 
cout << "Posisi bukan posisi tengah" << 
endl; 
    }    
    else{ 
        int nomor = 1; 
        bantu = head; 
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){ 
                bantu2 = bantu; 
            } 
            if( nomor == posisi ){ 
                hapus = bantu; 
        } 
                bantu = bantu->next; 
                nomor++; 
        } 
                bantu2->next = bantu; 
                delete hapus; 
    } 
} 

//Ubah Depan 
void ubahDepan(int data){ 
    if (isEmpty() == false){ 
        head->data = data; 
    } 
    else{ 
        cout << "List masih kosong!" << endl; 
    } 
} 

//Ubah Tengah 
void ubahTengah(int data, int posisi){ 
    Node *bantu; 
    if (isEmpty() == false){ 
        if( posisi < 1 || posisi > hitungList() ){ 
            cout << "Posisi di luar jangkauan" << endl; 
    } 
    else if( posisi == 1){ 
        cout << "Posisi bukan posisi tengah" << endl; 
    } 
    else{ 
        bantu = head; 
        int nomor = 1;
    while (nomor < posisi){ 
        bantu = bantu->next;nomor++; 
        } 
        bantu->data = data; 
    } 
} 
    else{ 
        cout << "List masih kosong!" << endl; 
    } 
} 

//Ubah Belakang 
void ubahBelakang(int data){ 
    if (isEmpty() == false){ 
        tail->data = data; 
    } 
    else{ 
        cout << "List masih kosong!" << endl; 
    } 
} 

//Hapus List 
void clearList(){ 
Node *bantu, *hapus; 
bantu = head; 
while (bantu != NULL){ 
        hapus = bantu; 
        bantu = bantu->next; 
        delete hapus; 
    } 
    head = tail = NULL; 
    cout << "List berhasil terhapus!" << endl; } 

//Tampilkan List 
void tampil(){ 
    Node *bantu; 
    bantu = head; 
    if (isEmpty() == false){
while (bantu != NULL){ 
        cout << bantu->data << ends; 
        bantu = bantu->next; 
        } 
        cout << endl; 
    } 
    else{ 
        cout << "List masih kosong!" << endl; 
    } 
} 
int main()
{ 
    init(); 
    insertDepan(3);tampil(); 
    insertBelakang(5); 
    tampil(); 
    insertDepan(2); 
    tampil(); 
    insertDepan(1); 
    tampil(); 
    hapusDepan(); 
    tampil(); 
    hapusBelakang(); 
    tampil(); 
    insertTengah(7,2); 
    tampil(); 
    hapusTengah(2);     
    tampil(); 
    ubahDepan(1); 
    tampil(); 
    ubahBelakang(8); 
    tampil(); 
    ubahTengah(11, 2); 
    tampil(); 
    return 0; 
}

```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/5c62b0e1-e6e1-41d1-9084-4647b4e388fd)</br>
Program menggunakan konsep single linked list non-circular untuk menyimpan dan mengelola sekumpulan data integer. Terdapat struktur data Node yang memiliki dua komponen: data (integer) dan pointer ke Node selanjutnya.</br>
# 2. Latihan Double Linked List Source
```C++
#include <iostream> 
using namespace std; 

class Node { 
    public:int data; 
    Node* prev; 
    Node* next; 
}; 
class DoublyLinkedList { 
    public: 
    Node* head; 
    Node* tail; 
    DoublyLinkedList() { 
        head = nullptr; 
        tail = nullptr; 
    } 
    void push(int data) { 
        Node* newNode = new Node; 
        newNode->data = data; 
        newNode->prev = nullptr; 
        newNode->next = head; 
        if (head != nullptr) { 
            head->prev = newNode; 
        } 
        else { 
            tail = newNode; 
        } 
        head = newNode; 
    } 
    void pop() { 
        if (head == nullptr) { 
            return; 
        } 
        Node* temp = head; 
        head = head->next; 
        if (head != nullptr) { 
            head->prev = nullptr; 
    } 
    else { 
        tail = nullptr; 
    } 
    delete temp; 
} 
bool update(int oldData, int newData) { 
    Node* current = head;while (current != nullptr) { if (current->data == oldData) { 
        current->data = newData; 
            return true; 
        } 
        current = current->next; 
    }
return false; 
} 
void deleteAll() { 
    Node* current = head; 
    while (current != nullptr) { 
        Node* temp = current; 
        current = current->next; 
        delete temp; 
    } 
    head = nullptr; 
    tail = nullptr; 
} 
void display() { 
    Node* current = head; 
    while (current != nullptr) { 
        cout << current->data << " "; 
        current = current->next; 
        } 
        cout << endl; 
    } 
}; 
int main() { 
    DoublyLinkedList list; 
    while (true) { 
        cout << "1. Add data" << endl; 
        cout << "2. Delete data" << endl; 
        cout << "3. Update data" << endl; 
        cout << "4. Clear data" << endl; 
        cout << "5. Display data" << endl; 
        cout << "6. Exit" << endl;int choice; 
        cout << "Enter your choice: "; 
        cin >> choice; 
        switch (choice) { 
            case 1: { 
                int data; 
                cout << "Enter data to add: "; 
                cin >> data; 
                list.push(data); 
                break; 
            }           
            case 2: { 
                list.pop(); 
                break; 
            } 
            case 3: { 
                int oldData, newData; 
                cout << "Enter old data: "; 
                cin >> oldData; 
                cout << "Enter new data: "; 
                cin >> newData; 
                bool updated = list.update(oldData, newData); 
        if (!updated) { 
            cout << "Data not found" << endl; 
        } 
    break;
    } 
            case 4: { 
                list.deleteAll(); 
                break; 
} 
            case 5: { 
                list.display(); 
                break; 
    } 
            case 6: { 
                return 0; 
} 
    default: { 
        cout << "Invalid choice" << endl; 
        break; 
        } 
    } 
} 

    return 0; 
}
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/b5547e9e-d5e2-4351-907f-c9610f60ee5c)</br>
Program diatas adalah implementasi dari sebuah program yang menggunakan struktur data Doubly Linked List (daftar berantai ganda) untuk menyimpan dan mengelola data integer. </br>
# Unguided 

# 1. Soal mengenai Single Linked List
Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut:
a.	Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang dimasukkan adalah nama dan usia anda.
[Nama_anda]	[Usia_anda]
John	        19
Jane	        20
Michael	        18
Yusuke	        19
Akechi	        20
Hoshino	        18
Karin	        18
b.	Hapus data Akechi
c.	Tambahkan data berikut diantara John dan Jane : Futaba	18
d.	Tambahkan data berikut diawal : Igor	20
e.	Ubah data Michael menjadi : Reyn	18
f.	Tampilkan seluruh data
```C++
#include <iostream>
using namespace std;
// Febrian Falih Alwafi
// 2311102181
// S1 1F-11-E

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
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/52e4aabc-1eaa-4a47-863b-709654d6fe1c)</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/46c58fee-79bd-4401-85d9-929f4cb3bc12)</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/a20b622f-f9de-48ad-90a8-b7ec92c76eb0)</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/fe9fcc3d-26e1-42cd-850d-328ccc74d3e7)</br>

Pada program ini adalahsebuah program yang menggunakan struktur data linked list untuk menyimpan dan mengelola data berupa nama dan usia. Program menggunakan struktur data Node yang memiliki dua atribut: nama_181 untuk menyimpan nama dan usia_181 untuk menyimpan usia, serta sebuah pointer next_181 yang menunjukkan ke node selanjutnya dalam linked list.

# 2. Soal mengenai Double Linked List
Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.<br>
Nama           |    Produk	Harga
---------------|-----------------
Originote	   |        60.000
Somethinc	   |        150.000
Skintific	   |        100.000
Wardah	       |        50.000
Hanasui	       |        30.000
</br>

Case:</br>
1.	Tambahkan produk Azarine dengan harga 65000 diantara
Somethinc dan Skintific
2.	Hapus produk wardah
3.	Update produk Hanasui menjadi Cleora dengan harga 55.000
4.	Tampilkan menu seperti dibawah ini
Toko Skincare Purwokerto
1.	Tambah Data
2.	Hapus Data
3.	Update Data
4.	Tambah Data Urutan Tertentu
5.	Hapus Data Urutan Tertentu
6.	Hapus Seluruh Data
7.	Tampilkan Data
8.	Exit
Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah
ini :</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/d25f9451-2b66-42d4-b2d0-efe907dcbe6a)</br>
```C++

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
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/9ec33776-37a0-4278-9051-cfb435ec8ed5)</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/e3579b73-43a8-41e9-a713-afe7eeb30f2d)</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/37ffd69c-a293-469d-a1a6-8e474b3a512f)</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/f161eb25-c946-4a33-88c9-e3e806a65198)</br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/3e697e7c-6acb-40b6-9050-efd3963e9946)</br>


Pada program ini adalah sebuah program yang menggunakan struktur data linked list ganda (doubly linked list) untuk menyimpan dan mengelola data tentang produk skincare. Deklarasi Struct Node dan Class DoublyLinkedList: Program menggunakan dua struktur utama, yaitu Node yang memiliki atribut produk dan harga serta pointer prev dan next untuk menunjukkan ke node sebelumnya dan node selanjutnya dalam linked list, dan DoublyLinkedList yang memiliki pointer ke head dan tail dari linked list.</br>

# Kesimpulan 
Dari materi dan tugas diatas, bahwa pemilihan antara Single Linked List dan Double Linked List tergantung pada kebutuhan dan karakteristik spesifik dari aplikasi yang akan diimplementasikan. Jika kecepatan operasi penambahan, penghapusan, dan akses ke elemen yang berdekatan lebih penting, maka Double Linked List bisa menjadi pilihan yang lebih baik. Namun, jika kebutuhan akan penggunaan memori yang lebih efisien dan operasi penambahan dan penghapusan di ujung linked list lebih sering dilakukan, maka Single Linked List bisa menjadi pilihan yang lebih tepat dan juga bahwa single linked list dan double linked list kedua jenis linked list ini merupakan struktur data yang kuat dan fleksibel untuk menyimpan dan mengelola data dalam berbagai aplikasi.</br>
# Referensi
[1] Trivusi. (16 september 2022). Struktur Data Linked List: Pengertian, Karakteristik, dan Jenis-jenisnya.</br>
[2] Rachmat, Santoso. (11 Desember 2014). Single Linked List pada C++.



