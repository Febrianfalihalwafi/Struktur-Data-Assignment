# <h1 align="center">Laporan Praktikum Modul 6 - STACK</h1>
<h3> Nama : Febrian Falih Alwafi</h3>
<h3> Nim :2311102181</h3>

# Tujuan Pratikum
a. Mampu memahami konsep stack pada struktur data dan algoritma
b. Mampu mengimplementasikan operasi-operasi pada stack
c. Mampu memecahkan permasalahan dengan solusi stack

# Dasar Teori 
<p align="justify"> Stack adalah sebuah kumpulan data dimana data yang diletakkan di atas data  yang lain. Dengan demikian stack adalah struktur data yang menggunakan konsep LIFO(Last In First Out). Dengan demikian, elemen terakhir yang disimpan dalam stack menjadi elemen pertama yang diambil. Dalam proses komputasi, untuk meletakkan sebuah elemen pada bagian atas dari stack, maka dilakukan operasi push. Dan untuk memindahkan dari tempat yang atas tersebut, maka dilakukan operasi pop.</p></br>
</br>

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/6b3a7e47-7a75-487f-a598-4c5750925f18)

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/70111cf8-1838-4b53-9c2d-8b61c3652204)


### Operasi pada stack melibatkan beberapa fungsi dasar yang dapat dilakukan pada
struktur data ini. Berikut adalah beberapa operasi umum pada stack:
- Push (Masukkan): Menambahkan elemen ke dalam tumpukan pada posisi paling
atas atau ujung.
- Pop (Keluarkan): Menghapus elemen dari posisi paling atas atau ujung tumpukan.
- Top (Atas): Mendapatkan nilai atau melihat elemen teratas pada tumpukan tanpa
menghapusnya.
- IsEmpty (Kosong): Memeriksa apakah tumpukan kosong atau tidak.
- IsFull (Penuh): Memeriksa apakah tumpukan penuh atau tidak (terutama pada
implementasi tumpukan dengan kapasitas terbatas).
- Size (Ukuran): Mengembalikan jumlah elemen yang ada dalam tumpukan.
- Peek (Lihat): Melihat nilai atau elemen pada posisi tertentu dalam tumpukan
tanpa menghapusnya.
- Clear (Hapus Semua): Mengosongkan atau menghapus semua elemen dari
tumpukan.
- Search (Cari): Mencari keberadaan elemen tertentu dalam tumpukan.

# Guided

```c++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull()
{
    return (top == maksimal);
}

bool isEmpty()
{
    return (top == 0);
}

void pushArrayBuku(string data)
{
    if (isFull())
    {
        cout << "Data telah penuh" << endl;
    }
    else
    {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku()
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang dihapus" << endl;
    }
    else
    {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi)
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    }
    else
    {
        int index = top;
        for (int i = 1; i <= posisi; i++)
        {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack()
{
    return top;
}

void changeArrayBuku(int posisi, string data)
{
    if (posisi > top)
    {
        cout << "Posisi melebihi data yang ada" << endl;
    }
    else
    {
        int index = top;
        for (int i = 1; i <= posisi; i++)
        {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku()
{
    for (int i = top; i >= 0; i--)
    {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku()
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang dicetak" << endl;
    }
    else
    {
        for (int i = top - 1; i >= 0; i--)
        {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main()
{
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();
    cout << "\n";

    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();

    return 0;
}
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/666e4fa9-59e9-48c0-be14-ccd536125a87)</br>
# Penjelasan
Kode di atas adalah implementasi stack menggunakan array dalam C++. Stack adalah struktur data yang mengikuti prinsip LIFO (Last In, First Out), di mana elemen terakhir yang dimasukkan adalah yang pertama kali dihapus. Kode ini menyediakan fungsi-fungsi dasar seperti push (menambahkan elemen), pop (menghapus elemen), peek (melihat elemen tanpa menghapus), dan fungsi-fungsi lainnya untuk memeriksa keadaan stack. Selain itu, fungsi main() digunakan untuk menguji operasi stack tersebut dengan menambah, menghapus, dan mengubah data dalam stack.

# Unguided

1) Unguided 1 

```c++
#include <iostream>
#include <stack>

using namespace std;

// Nama : Febrian Falih Alwafi
// Nim : 2311102181

bool Palindrom_181(string kalimat181)
{
  for (int i = 0; i < kalimat181.length(); i++)
  { // Konversi kalimat ke huruf kecil
    kalimat181[i] = tolower(kalimat181[i]);
  }

  stack<char> s; // Buat stack untuk menyimpan karakter kalimat

  for (int i = 0; i < kalimat181.length(); i++)
  { // Masukkan karakter kalimat ke stack
    s.push(kalimat181[i]);
  }

  for (int i = 0; i < kalimat181.length() / 2; i++)
  { // Membandingkan karakter dari depan dan belakang kalimat
    if (kalimat181[i] != s.top())
    {
      return false;
    }
    s.pop();
  }

  return true;
}

int main()
{
  string kalimat181;
  cout << "===== Febrian Falih =======" << endl;

  do
  {
    cout << "\n Masukkan kalimat: "; // Input kalimat dari pengguna
    getline(cin, kalimat181);

    if (Palindrom_181(kalimat181))
    { // Memeriksa apakah kalimat palindrom atau bukan
      cout << " Kalimat " << kalimat181 << " adalah : Palindrom!" << endl;
    }
    else
    {
      cout << " Kalimat " << kalimat181 << " bukan : Palindrom!" << endl;
    }

  } while (kalimat181 != "exit");
  
  return 0;
}
```
# Output 
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/761f9d83-a5fd-47b2-956e-b755007fd96d)</br>
# Penjelasan 
Program C++ di atas adalah implementasi untuk mengecek apakah sebuah kalimat adalah palindrom atau bukan. Program tersebut juga mengimplementasikan pengecekan palindrom dengan menggunakan stack. Fungsi Palindrom_181 mengambil sebuah string dan memeriksa apakah string tersebut merupakan palindrom atau tidak dengan memanfaatkan struktur data stack. Fungsi main adalah tempat program dimulai, dimana pengguna diminta untuk memasukkan kalimat dan hasil pengecekan palindrom ditampilkan. Program akan berulang terus menerus hingga pengguna memasukkan kata "exit".

2) Unguided 2 
```c++
#include <iostream>
#include <stack>

using namespace std;

// Nama : Febrian Falih Alwafi
// Nim : 2311102181

string Mengulang181(string kalimat181) {
  stack<char> s; // Buat stack untuk menyimpan karakter kalimat

  for (int i = 0; i < kalimat181.length(); i++) { // Masukkan karakter kalimat ke stack
    s.push(kalimat181[i]);
  }

  string sesudahmengulangi181; // Membalik kalimat dengan mengeluarkan karakter dari stack
  while (!s.empty()) {
    sesudahmengulangi181 += s.top();
    s.pop();
  }

  return sesudahmengulangi181;
}

int main() {
  string kalimat181;
  cout << "===== Febrian - Balikan kalimat =======" << endl;

  do {
  cout << "\n Cantumkan kalimat yang ingin dibalikkan: ";  // Input kalimat dari pengguna
  getline(cin, kalimat181);

  string sesudahmengulangi181 = Mengulang181(kalimat181);  // Membalik kalimat

  cout << " Kata atau kalimat yang dibalik: " << sesudahmengulangi181 << endl; // Menampilkan kalimat yang dibalik

  } while (kalimat181 != "exit");
  return 0;
}
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/f91923e8-31a3-41d3-a3c8-3b15115be126)</br>
# Penjelasan 
Program tersebut membalikkan kalimat atau kata yang dimasukkan oleh pengguna menggunakan struktur data stack. Fungsi Mengulang181 membuat stack dari karakter-karakter kalimat, kemudian mengeluarkan karakter-karakter dari stack untuk menyusun kembali kalimat tersebut dalam urutan terbalik. Fungsi main meminta input dari pengguna, memanggil fungsi Mengulang181 untuk membalikkan kalimat, dan menampilkan hasil balikan. Program berulang terus menerus hingga pengguna memasukkan kata "exit".

# Referensi
[1] Anita Sindar, R. M. S. Struktur Data Dan Algoritma Dengan C++. Vol. 1. CV. AA. RIZKY, 2019.
[2] Utami, Ema, et al. Langkah Mudah Belajar Struktur Data Menggunakan C/C++. Elex Media Komputindo, 2017.
[3] Rohmah, Mimin Fatchiyatur, and Rokhmad Eko Cahyono. Teori dan Aplikasi Algoritma Pemrograman dengan Bahasa C dan C++. Penerbit NEM, 2022.

