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
```c++

