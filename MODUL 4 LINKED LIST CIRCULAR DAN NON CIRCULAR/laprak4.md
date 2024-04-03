# <h1 align="center">Laporan Praktikum Modul 4 - LINKED LIST CIRCULAR DAN NON CIRCULAR </h1>
<h2>Nama : Febrian Falih Alwafi</h2>
<h2>Nim : 2311102181</h2>

# Tujuan Pratikum
a. Praktikan dapat mengetahui dan memahami linked list circular dan non circular.<br>
b. Praktikan dapat membuat linked list circular dan non circular.<br>
c. Praktikan dapat mengaplikasikan atau menerapkan linked list circular dan non 
circular pada program yang dibuat

# Dasar Teori 
<h2>1. Linked List Non Circular</h2>
<p> Linked List circular merupakan suatu linked list dimana tail (node terakhir) menunjuk ke head (node pertama). Jadi tidak ada pointer yang menunjuk NULL.</p></br>
</br>
1. Deklarasi Linked List Circular:

```C++
struct tnode
{
     int data;
     tnode *next;
};
void main()
{
     head = new tnode;
     head->next = head;
}
```
</br>

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/dab10a45-9feb-483c-b3bc-f5f0ccf30a81)


</br>


2. Menambah node dan membuat tail dari  linked list circular
Deklarasi penambahan node baru:
```C++
void main()
{
     node = new tnode;
     tail = new tnode;


     //head->next di bawah ini "masih" menunjuk ke head itu sendiri 

     //jadi, kode di bawah ini maksudnya node->next menunjuk ke head
     node->next = head->next;


     //baru di sini head->next diubah menunjuk ke node

     //hasilnya akan seperti "Gambar 6"
     head->next = node;
     tail = node;
}
```
</br>

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/7d38214c-b312-4994-ac27-875be293977a)


</br>

Gambar Penambahan Node Baru

3. Deklarasi menyisipkan node baru menggunakan sintak berikut:
```C++
void main()
{
     node = new tnode;
     node->next = head->next;
     head->next = node;
}
```
</br>

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/fce1f8b9-0baf-4d38-96d5-d9cbfdcf3339)

Gambar Menyisipkan Node Baru

4. Deklarasi menghapus node dari single linked list circular, menggunakan sintaks berikut:
```C++
void main()
{
     hapus = new tnode;
     if( head != tail)
     {
           hapus = head;
           head = head->next;
           tail->next = head;
           delete hapus;
     }else
     {
           head = NULL;
           tail = NULL;
     }
}
```
</br>

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/dc291fd5-3370-4f78-9b81-f05c1c4ccb9d)


</br>

Linked list non circular adalah linked List yang pointer next pada node terakhir(tail) -nya menunjuk ke Null.
1. Deklarasi node dengan struct pada single linked list:
```C++
struct tnode
{
      int data;
      struct tnode *next;
}
```

Gambar Sebuah Node pada Single Linked List
2. Deklarasi node untuk beberapa keperluan, seperti berikut ini:
```C++ struct tnode *head=NULL, *curr=NULL, *node=NULL; ```

3. Membuat elemen pertama dan menambahkan elemen di belakang Single Linked List

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/4fbc9c6c-0103-433c-b823-dc15cc531ec8)
</br>

# Guided

1) Linked List Non Circular
```C++
#include <iostream>
using namespace std;
// PROGRAM SINGLE LINK LIST NON CIRCULAR
// DEKLARASI STRUCT NODE

struct node
{
    int data;
    node *next;
};
node *head;
node *tail;

// INSTALASI NODE
void init()
{
    head = NULL;
    tail = NULL;
}

//PENGECEKAN
bool isEmpty()
{
    if(head == NULL)
        return true;

    else
        return false;
}

// TAMBAH DEPAN
void insertDepan(int nilai)
{
    //BUAT NODE BARU
    node *baru = new node;
    baru -> data = nilai;
    baru -> next = NULL;
    if(isEmpty() == true)
    {
        head = tail = baru;
        tail -> next = NULL;
    }
    else
    {
        baru -> next = head;
        head = baru;
    }
}

// TAMBAH BELAKANG
void insertBelakang(int nilai)
{
    // BUAT NODE BARU
    node *baru = new node;
    baru -> data = nilai;
    baru -> next = NULL;
    if(isEmpty() == true)
    {
        head = tail = baru;
        tail -> next = NULL;
    }
    else
    {
        tail -> next = baru;
        tail = baru;
    }
}

// HITUNG JUMLAH LIST
int hitungList()
{
    node *hitung;
    hitung = head;
    int jumlah = 0;
    while(hitung != NULL)
    {
        jumlah++;
        hitung = hitung -> next;
    }
    return jumlah;
}

// TAMBAH TENGAH
void insertTengah(int data, int posisi)
{
    if(posisi < 1 || posisi > hitungList())
    {
        cout << "posisi di liar jangkauan" << endl;
    }
    else if(posisi == 1)
    {
        cout << "posisi buan posisi tengah" << endl;
    }
    else
    {
        node *baru, *bantu;
        baru = new node();
        baru -> data = data;

        // TRANSVERSING
        bantu = head;
        int nomor = 1;
        while(nomor < posisi -1)
        {
            bantu =bantu -> next;
            nomor++;
        }
    
    baru -> next = bantu -> next;
    bantu -> next = baru;
    }
}

//HAPUS DEPAN
void hapusDepan()
{
    node *hapus;
    if(isEmpty() == false)
    {
        if(head -> next != NULL)
        {
            hapus = head;
            head = head -> next;
            delete hapus;
        }
    
    else
    {
        head = tail = NULL;
    }
    }
    else
    {
        cout <<"list kosong" << endl;
    }
}

// HAPUS BELAKNG
void hapusBelakng()
{
    node *hapus;
    node *bantu;
    if(isEmpty() == false)
    {
        if(head != tail)
        {
            hapus = tail;
            bantu = head;
            while(bantu -> next != tail)
            {
                bantu = bantu -> next;
            }
            tail = bantu;
            tail -> next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout <<"list kosiing"<< endl;
    }
}

// HAPUS TENGAH
void hapusTengah(int posisi)
{
    node *bantu, *hapus, *sebelum;
    if( posisi < 1 || posisi > hitungList())
    {
        cout <<"posisi di liar jangkauan"<< endl;
    }
    else if(posisi == 1)
    {
        cout <<"posisi bukan posisi tengah"<< endl;
    }
    else 
    {
        int nomor = 1;
        bantu = head;
        while(nomor <= posisi)
        {
            if(nomor == posisi - 1)
            {
                sebelum = bantu;
            }
            if(nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu -> next;
            nomor++;
        }
        sebelum  -> next = bantu;
        delete hapus;
    }

}

// Ubah Depan
void ubahDepan(int data)
{
if (isEmpty() == 0)
{
head->data = data;
}
else
{
cout << "List masih kosong!" << endl;
}
}

// Ubah Tengah
void ubahTengah(int data, int posisi)
{
node *bantu;
if (isEmpty() == 0)
{
    if (posisi < 1 || posisi > hitungList())
{
cout << "Posisi di luar jangkauan" << endl;
}
else if (posisi == 1)
{

}
else
{
cout << "Posisi bukan posisi tengah" << endl;

bantu = head;
int nomor = 1;
while (nomor < posisi)
{
bantu = bantu->next;
nomor++;
}
bantu->data = data;
}
}
else
{
cout << "List masih kosong!" << endl;
}
}

// Ubah Belakang
void ubahBelakang(int data)
{
if (isEmpty() == 0)
{
tail->data = data;
}
else
{
cout << "List masih kosong!" << endl;
}
}

// Hapus List
void clearList()
{
node *bantu, *hapus;
bantu = head;
while (bantu != NULL)
{
hapus = bantu;
bantu = bantu->next;
delete hapus;
}
head = tail = NULL;
cout << "List berhasil terhapus!" << endl;
}

// Tampilkan List
void tampil()
{
node *bantu;
bantu = head;
if (isEmpty() == false)
{
while (bantu != NULL)
{
cout << bantu->data << ends;
bantu = bantu->next;
}
cout << endl;
}
else
{
cout << "List masih kosong!" << endl;
}
}

int main()
{
init();
insertDepan(3);
tampil();
insertBelakang(5);
tampil();
insertDepan(2);
tampil();
insertDepan(1);
tampil();
hapusDepan();
tampil();
hapusBelakng();
tampil();
insertTengah(7, 2);
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
</br>
# Output

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/4ef86820-873e-42d9-8b50-1925c8647807)
Single Linked List merupakan suatu linked list yang hanya memiliki satu variabel pointer saja. Dimana pointer tersebut menunjuk ke node selanjutnya. Biasanya field pada tail menunjuk ke NULL.
</br>

2.) Linked List Circular 
```C++
#include <iostream>

using namespace std;

// Program SINGLE LINGKED LIST SIRCULAR

// Deklarasi Struct Node
struct  Node
{
    string data;
    Node*next;
};

Node *head, *tail, *baru, *bantu, *hapus;

void init()
{
    head = NULL;
    tail = head;
}

// Pengecekan
int isEmpty()
{
    if (head == NULL)
    return 1; // true
    else
    return 0; // false
}

// Buat Node baru
void buatNode(string data)
{
    baru = new Node;
    baru->data = data;
    baru->next = NULL;
}

//hitung list
int hitunglist()
{
    bantu = head;
    int jumlah = 0;

    while (bantu != NULL)
    {
        jumlah++;
        bantu = bantu->next;
    }
    return jumlah;
}

// Tambah Depan

void insertDepan(string data)
{
    // buat Node Baru
    buatNode(data);

    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else 
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }
        baru->next = head;
        head = baru;
        tail->next = head;
    }
}

// Tambah Belakang
void insertBelakang(string data)
{
    // Buat Node baru
    buatNode(data);

    if(isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }

        tail->next = baru; 
        baru->next = head;
        tail = baru;
    }
}
// Tambah Tengah
void insertTengah(string data, int posisi)
{
    if(isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        baru->data = data;
        //Transvering
        int nomor = 1;
        bantu = head;
        while(nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
// Hapus Depan
void hapusDepan()
{
    if (isEmpty() == 0)
    {
        hapus = head;
        tail = NULL;

        delete hapus;
    }
    else 
    {
        while(tail->next != hapus)
        {
            tail = tail->next;
        }
        head = head->next;
        tail->next = head;
        hapus->next = NULL;

        delete hapus;
    }
}
// hapus belakang
void hapusBelakang()
{
    if(isEmpty() == 0)
    {
        hapus = head;
        tail = head;
        if(hapus->next == head)
        {
            head = NULL;
            tail = NULL;

            delete hapus;
        }
        else
        {
            while (hapus->next != head)
            {
                hapus = hapus->next;
            }
            while (tail->next != hapus)
            {
                tail = tail->next;
            }
            tail->next = head;
            hapus->next = NULL;

            delete hapus;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Hapus tengah
void hapusTengah(int posisi)
{
    if (isEmpty() == 0)
    {
        //Transvering
        int nomor = 1;
        bantu = head;

        while (nomor < posisi -1)
        {
            bantu = bantu->next;
            nomor++;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;

        delete hapus;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus list
void clearlist()
{
    if (head != NULL)
    {
        hapus = head->next;

        while (hapus != head)
        {
            bantu = hapus->next;
            delete hapus;
            hapus = bantu;
        }
        delete head;
        head = NULL;
    }
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan list
void tampil()
{
    if(isEmpty() == 0)
    {
        tail = head;
        do
        {
            cout << tail->data << ends;
            tail = tail->next;
        } 
        while (tail != head);
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

int main()
{
init();
insertDepan("Ayam");
tampil();
insertDepan("Bebek");
tampil();
insertBelakang("Cicak");
tampil();
insertBelakang("Domba");
tampil();
hapusBelakang();
tampil();
hapusDepan();
tampil();
insertTengah("keboo", 3);
tampil();
hapusTengah(2);
tampil();

return 0;
}

```
</br>
# Output

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/d30affab-bd25-4ec8-82e7-b143f17fd60f)

Circular Single Linked List adalah Single Linked List yang pointernya menunjuk pada dirinya sendiri. Jika Single Linked List tersebut terdiri dari beberapa node, maka pointer next pada node terakhir akan menunjuk ke node terdepannya
</br>

# Unguided

1) Buatlah menu untuk menambahkan, mengubah, menghapus, dan melihat Nama dan NIM mahasiswa
```C++
#include <iostream>
#include <iomanip>
using namespace std;
//Nama : Febrian Falih Alwafi
//NIM  : 2311102181

// Deklarasi Struct Node
struct node {
    string nama;
    string nim;
    node *next;
};

// Deklarasi variabel head dan tail
node *head;
node *tail;

// Inisialisasi linked list
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah linked list kosong
bool isempty() {
    return head == NULL;
}
// Menghitung jumlah node dalam linked list
int hitunglist() {
    int jumlah = 0;
    node *bantu = head;
    while (bantu != NULL) {
        jumlah++;
        bantu = bantu->next;
    }
    return jumlah;
}

// Menambah data mahasiswa di depan linked list
void insertdepan(string nama, string nim) {
    // Membuat node baru
    node *baru = new node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    // Jika linked list kosong
    if (isempty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Menambah data mahasiswa di belakang linked list
void insertbelakang(string nama, string nim) {
    // Membuat node baru
    node *baru = new node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    // Jika linked list kosong
    if (isempty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Menambah data mahasiswa di tengah linked list
void inserttengah(string nama, string nim, int posisi) {
    if (posisi < 1 || posisi > hitunglist() + 1) {
        cout << "Posisi diluar jangkauan" << endl;
    } else {
        if (posisi == 1) {
            insertdepan(nama, nim);
        } else if (posisi == hitunglist() + 1) {
            insertbelakang(nama, nim);
        } else {
            node *baru = new node;
            baru->nama = nama;
            baru->nim = nim;

            node *bantu = head;
            for (int i = 1; i < posisi - 1; ++i) {
                bantu = bantu->next;
            }

            baru->next = bantu->next;
            bantu->next = baru;
        }
    }
}

// Mengubah data mahasiswa di depan linked list
void ubahdepan(string nama, string nim) {
    if (!isempty()) {
        // Menyimpan data sebelum diubah
        string nama_sebelum = head->nama;
        string nim_sebelum = head->nim;

        // Mengubah data
        head->nama = nama;
        head->nim = nim;

        // Menampilkan informasi
        cout << "Data telah diubah dari " << nama_sebelum << " menjadi " << nama << endl;
    } else {
        cout << "Linked list masih kosong!" << endl;
    }
}

// Mengubah data mahasiswa di belakang linked list
void ubahbelakang(string nama, string nim) {
    if (!isempty()) {
        // Menyimpan data sebelum diubah
        string nama_sebelum = tail->nama;
        string nim_sebelum = tail->nim;

        // Mengubah data
        tail->nama = nama;
        tail->nim = nim;

        // Menampilkan informasi
        cout << "Data telah diubah dari " << nama_sebelum << " menjadi " << nama << endl;
    } else {
        cout << "Linked list masih kosong!" << endl;
    }
}

// Mengubah data mahasiswa di tengah linked list
void ubahtengah(string nama, string nim, int posisi) {
    if (posisi < 1 || posisi > hitunglist()) {
        cout << "Posisi diluar jangkauan" << endl;
    } else {
        node *bantu = head;
        for (int i = 1; i < posisi; ++i) {
            bantu = bantu->next;
        }

        // Menyimpan data sebelum diubah
        string nama_sebelum = bantu->nama;
        string nim_sebelum = bantu->nim;

        // Mengubah data
        bantu->nama = nama;
        bantu->nim = nim;

        // Menampilkan informasi
        cout << "Data pada posisi " << posisi << " telah diubah dari " << nama_sebelum << " menjadi " << nama << endl;
    }
}

// Menghapus data mahasiswa di depan linked list
void hapusdepan() {
    if (!isempty()) {
        node *hapus = head;
        if (head == tail) {
            head = tail = NULL;
        } else {
            head = head->next;
        }
        delete hapus;
    } else {
        cout << "Linked list kosong!" << endl;
    }
}

// Menghapus data mahasiswa di belakang linked list
void hapusbelakang() {
    if (!isempty()) {
        node *hapus = tail;
        if (head == tail) {
            head = tail = NULL;
        } else {
            node *bantu = head;
            while (bantu->next != tail) {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        }
        delete hapus;
    } else {
        cout << "Linked list kosong!" << endl;
    }
}

// Menghapus data mahasiswa di tengah linked list
void hapustengah(int posisi) {
    if (posisi < 1 || posisi > hitunglist()) {
        cout << "Posisi diluar jangkauan" << endl;
    } else {
        if (posisi == 1) {
            hapusdepan();
        } else if (posisi == hitunglist()) {
            hapusbelakang();
        } else {
            node *hapus = head;
            for (int i = 1; i < posisi - 1; ++i) {
                hapus = hapus->next;
            }
            node *hapus_node = hapus->next;
            hapus->next = hapus_node->next;
            delete hapus_node;
        }
    }
}

// Menghapus seluruh data di dalam linked list
void hapuslist() {
    while (!isempty()) {
        hapusdepan();
    }
    cout << "Linked list berhasil dihapus semua!" << endl;
}

// Menampilkan seluruh data dalam linked list
void tampilkan() {
    if (!isempty()) {
        node *bantu = head;
        int nomor = 1; // Variabel untuk nomor indeks atau nomor urut
        cout << setw(5) << left << "No" << setw(15) << left << "NAMA" << "NIM" << endl;
        while (bantu != NULL) {
            cout << setw(5) << left << nomor << setw(15) << left << bantu->nama << bantu->nim << endl;
            bantu = bantu->next;
            nomor++; // Menginkremen nomor indeks atau nomor urut
        }
    } else {
        cout << "Linked list kosong!" << endl;
    }
}
int main() {
    init();
    int pilihan;
    string nama;
    string nim;
    int posisi;

    do {
        // Menampilkan menu
        cout << "Menu Linked List Non Circular Mahasiswa" << endl;
        cout <<endl;
        cout << "1.Tambah Depan" << endl;
        cout << "2.Tambah Belakang" << endl;
        cout << "3.Tambah Tengah" << endl;
        cout << "4.Ubah Depan" << endl;
        cout << "5.Ubah Belakang" << endl;
        cout << "6.Ubah Tengah" << endl;
        cout << "7.Hapus Depan" << endl;
        cout << "8.Hapus Belakang" << endl;
        cout << "9.Hapus Tengah" << endl;
        cout << "10.Hapus List" << endl;
        cout << "11.Tampilkan" << endl;
        cout << "0.Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> pilihan;
        cout <<endl;

        switch (pilihan) {
            case 1:
                cout <<"=TAMBAH DEPAN="<<endl;
                cout << endl;
                cout << "Masukkan Nama :";
                cin >> nama;
                cout << "Masukkan NIM :";
                cin >> nim;
                cout<<endl;
                cout << "Data telah ditambahkan"<<endl;
                cout << endl;
                insertdepan(nama, nim);
                break;
            case 2:
                cout << "=Tambah Belakang"<<endl;
                cout <<endl;
                cout << "Masukkan Nama :";
                cin >> nama;
                cout << "Masukkan NIM :";
                cin >> nim;
                cout<<endl;
                cout << "Data telah ditambahkan"<<endl;
                cout << endl;
                insertbelakang(nama, nim);
                break;
            case 3:
                cout << "=Tambah Tengah="<<endl;
                cout<<endl;
                cout << "Masukkan Nama :";
                cin >> nama;
                cout << "Masukkan NIM :";
                cin >> nim;
                cout << "Masukkan Posisi :";
                cin >> posisi;
                cout<<endl;
                cout << "Data telah ditambahkan"<<endl;
                cout << endl;
                inserttengah(nama, nim, posisi);
                break;
            case 4:
                cout << "=Ubah Depan="<<endl;
                cout<<endl;
                cout << "Masukkan Nama :";
                cin >> nama;
                cout << "Masukkan NIM :";
                cin >> nim;
                cout << endl;
                ubahdepan(nama, nim);
                break;
            case 5:
                cout << "Ubah Belakang"<<endl;
                cout <<endl;
                cout << "Masukkan Nama :";
                cin >> nama;
                cout << "Masukkan NIM :";
                cin >> nim;
                cout << endl;
                ubahbelakang(nama, nim);
                break;
            case 6:
                cout << "Ubah Tengah"<<endl;
                cout <<endl;
                cout << "Masukkan Nama :";
                cin >> nama;
                cout << "Masukkan NIM :";
                cin >> nim;
                cout << "Masukkan Posisi :";
                cin >> posisi;
                cout << endl;
                ubahtengah(nama, nim, posisi);
                break;
            case 7:
                cout << "=Hapus Depan="<<endl;
                cout <<endl;
                cout <<"Masukkan Nama"<<endl;
                cin >>nama;
                cout << "data "<<nama<<" berhasil untuk dihapus"<<endl;
                cout <<endl;
                hapusdepan();
                break;
            case 8:
                cout << "=Hapus Belakang="<<endl;
                cout <<endl;
                cout <<"Masukkan Nama"<<endl;
                cin >>nama;
                cout << "data "<<nama<<" berhasil untuk dihapus"<<endl;
                cout <<endl;
                hapusbelakang();
                break;
            case 9:
                cout << "=Hapus Tengah="<<endl;
                cout <<endl;
                cout <<"Masukkan Nama"<<endl;
                cin >>nama;
                cout <<"Posisi"<<endl;
                cin >>posisi;
                cout << "data "<<nama<<" berhasil untuk dihapus"<<endl;
                cout <<endl;
                hapustengah(posisi);
                break;
            case 10:
                cout << "=Hapus List="<<endl;
                cout <<endl;
                hapuslist();
                break;
            case 11:
                cout << "=Menampilkan Semua data mahasiswa="<<endl;
                cout <<endl;
                cout <<"=Data Mahasiswa="<<endl;
                cout << endl;
                tampilkan();
                break;
            case 0:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 0);

    return 0;
}
```


# Tampilkan Menu
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/ce0a8bd2-c590-44c9-95f5-e5f669851e71)
# Tampilkan Oprasi Tambah
- Tambah Depan<br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/d727bf55-f2be-4ef6-a5ea-78cef63d3906)

- Tambah Tengah <br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/5dde6785-4d2d-42db-91b6-85a2f916c2e5)

# Tampilan Operasi Hapus:
- Hapus belakang <br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/e28670ad-ee7a-4dbd-a80c-6adc90292218)
- Hapus tengah<br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/8a01d7e5-00b5-4c1d-ba7f-55eaa6e58b47)

# Tampilan Operasi Ubah:
- Ubah belakang<br>
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/d09eae50-7fa9-4e3b-912b-0418f4ff4ee1)

# Menampilkan seluruh data mahasiswa sebelum di lakukan penggantian
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/7f403fac-c5ad-4e45-9ef4-6f5d05b0b9ac)

# Menampilkan seluruh data mahasisswa setelah penggantian
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/1d09b045-be53-43d6-a2e6-d5789f876554)

Progrsm diatas yaitu :

1. Kode mengimplementasikan struktur data linked list menggunakan struct node, yang memiliki dua string (nama dan NIM) serta pointer next yang menunjuk ke node berikutnya.

2. Terdapat fungsi-fungsi dasar untuk manipulasi linked list, seperti inisialisasi linked list, pengecekan apakah linked list kosong, menghitung jumlah node dalam linked list, penambahan data di depan, di belakang, dan di tengah linked list, pengubahan data, penghapusan data, serta menampilkan seluruh data dalam linked list.

3. Kode memberikan pengguna pilihan menu untuk melakukan operasi-operasi tersebut melalui loop do-while. Pengguna dapat memilih untuk menambah, mengubah, menghapus, atau menampilkan data mahasiswa dalam linked list.

4. Kode menggunakan konsep alokasi memori dinamis untuk membuat dan menghapus node-node dalam linked list.

5. Terdapat validasi-posisi untuk memastikan operasi-operasi seperti penambahan, pengubahan, dan penghapusan dilakukan pada posisi yang sesuai dalam linked list.

6. Penggunaan fungsi isempty() memastikan bahwa operasi-operasi tertentu hanya dilakukan jika linked list tidak kosong, sehingga mencegah terjadinya kesalahan saat mengakses linked list yang kosong.

7. Setiap operasi yang dilakukan pada linked list diinformasikan kepada pengguna dengan pesan yang sesuai, untuk memberikan umpan balik terhadap tindakan yang dilakukan.

8.Keseluruhan, kode tersebut memberikan fungsi dasar untuk pengelolaan data mahasiswa menggunakan linked list dalam bahasa pemrograman C++.

# Kesimpulan

Linked list adalah struktur data yang fleksibel dan dinamis. Ini memungkinkan penambahan dan penghapusan elemen dengan mudah, tanpa perlu mengalokasikan atau mengalokasikan ulang memori secara besar-besaran.

- linked list circular <br>
Linked list circular adalah struktur data di mana setiap node dalam linked list memiliki pointer yang menunjuk kembali ke node awalnya, membentuk lingkaran atau siklus.

-linked list noncircular <br>
Linked list noncircular adalah struktur data linier di mana setiap elemen (node) memiliki pointer yang menunjuk ke node berikutnya dalam urutan tertentu, kecuali untuk node terakhir yang menunjuk ke NULL.

Pemilihan jenis linked list tergantung pada kebutuhan operasi yang akan dilakukan pada data.</br>
- Circular linked list: Cocok untuk navigasi data maju dan mundur terus menerus, serta lebih fleksibel dalam hal navigasi.</br>
- Non-circular linked list: Lebih sederhana dan efisien dalam hal memori.</br>

# Referensi

1.) Anita Sindar, R. M. S. Struktur Data Dan Algoritma Dengan C++. Vol. 1. CV. AA. RIZKY, 2019.
2.) Sihombing, Johnson. "Penerapan Stack Dan Queue Pada Array Dan Linked List Dalam Java." INFOKOM (Informatika & Komputer) 7.2 (2019): 15-24.
3.) Nugraha, Aria Sakti. "Artikel Double Linked List Circulate." (2019).







