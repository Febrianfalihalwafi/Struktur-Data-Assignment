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

# Tampilkan Menu


