# <h1 align="center">Laporan Praktikum Modul 7 - QUEUE </h1>
<h3> Nama : Febrian Falih Alwafi </h3>
<h3>Nim : 2311102181</h3>
<h3>Kelas : S1F-11-E</h3>

# TUJUAN PRAKTIKUM
1. Mahasiswa mampu menjelaskan definisi dan konsep dari double queue
2. Mahasiswa mampu menerapkan operasi tambah, menghapus pada queue
3. Mahasiswa mampu menerapkan operasi tampil data pada queue

# DASAR TEORI
Pada struktur data  Queue atau antrian adalah sekumpulan data yang mana  penambahan elemen hanya bisa dilakukan pada suatu ujung disebut dengan sisi belakang (rear), dan penghapusan (pengambilan elemen) dilakukan lewat ujung lain (disebut dengan sisi depan atau front). 

Pada Stack atau tumpukan menggunakan prinsip “Masuk terakhir keluar pertama”atau LIFO (Last In First Out), Maka pada Queue atau antrian prinsip yang digunakan adalah “Masuk Pertama Keluar Pertama” atau FIFO (First In First Out).

Queue atau antrian banyak kita jumpai dalam kehidupan sehari-hari, ex: antrian Mobil diloket Tol, Antrian mahasiswa Mendaftar, dll. Contoh lain dalam bidang komputer adalah pemakaian sistem komputer berbagi waktu(time-sharing computer system) dimana ada sejumlah pemakai yang akan menggunakan sistem tersebut secara serempak.

Pada Queue atau antrian Terdapat satu buah pintu masuk di suatu ujung dan satu buah pintu keluar di ujung satunya dimana membutuhkan variabel Head dan Tail (depan/front, belakang/rear).

![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/295e1b77-49e4-4f09-b2e9-c56cccd0dcc7)</br>


# Operasi-operasi Queue :

● enqueue() : menambahkan data ke dalam queue.</br>
● dequeue() : mengeluarkan data dari queue.</br>
● peek() : mengambil data dari queue tanpa menghapusnya.</br>
● isEmpty() : mengecek apakah queue kosong atau tidak.</br>
● isFull() : mengecek apakah queue penuh atau tidak.</br>
● size() : menghitung jumlah elemen dalam queue.</br>


# GUIDED

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; 
int front = 0; 
int back = 0; 
string queueTeller[5]; 

bool isFull() { 
    if (back == maksimalQueue) {
        return true; 
    } else {
        return false;
    }
}

bool isEmpty() { 
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { 
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { 
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { 
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { 
    return back;
}

void clearQueue() { 
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { 
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/a907a50a-95f0-401d-8b32-a99bf17c8541)</br>

# Penjelasan Guided 1 
Kode di atas merupakan implementasi antrian (queue) sederhana menggunakan array di C++. Antrian ini memiliki kapasitas maksimal lima elemen yang dilacak menggunakan variabel front dan back. Fungsi isFull() mengecek apakah antrian penuh, sedangkan isEmpty() mengecek apakah antrian kosong. Fungsi enqueueAntrian() menambahkan elemen baru ke antrian jika tidak penuh, dan dequeueAntrian() menghapus elemen dari antrian jika tidak kosong dengan menggeser elemen-elemen yang tersisa. Fungsi countQueue() mengembalikan jumlah elemen dalam antrian, dan clearQueue() mengosongkan seluruh antrian. Fungsi viewQueue() menampilkan isi antrian, menampilkan elemen kosong sebagai "(kosong)". Di dalam fungsi main(), beberapa operasi antrian dilakukan: menambah elemen "Andi" dan "Maya", menampilkan antrian dan jumlah elemennya, menghapus satu elemen, menampilkan kembali antrian, mengosongkan antrian, dan akhirnya menampilkan antrian yang sudah kosong beserta jumlah elemennya.

# UNGUIDED 1 
```c++
#include <iostream>
using namespace std;

// Nama : Febrian Falih Alwafi
// Nim : 2311102181
// Kelas : S1F-11-E

struct Node {
  string dat181;
  Node* next;
};


Node* head = NULL;
Node* tail = NULL; 


bool isEmpty() {
  return head == NULL;
}


void enqueueAntrian(string dat181) {
  Node* newNode = new Node; 
  newNode->dat181 = dat181; 
  newNode->next = NULL; 

  if (isEmpty()) { 
    head = newNode;
    tail = newNode;
  } else { 
    tail->next = newNode;
    tail = newNode;
  }
}


void dequeueAntrian() {
  if (isEmpty()) {
    cout << "Hmm, this queue is empty! Nothing to dequeue! / Hmm, antrian ini kosong ! Tidak ada yang bisa di ambil " << endl;
    return;
  }

  Node* temp = head; 
  head = head->next; 
  delete temp; 

  if (head == NULL) { 
    tail = NULL;
  }
}


int countQueue() {
  int count = 0;
  Node* current = head;
  while (current != NULL) {
    count++;
    current = current->next;
  }
  return count;
}


void clearQueue() {
  while (!isEmpty()) {
    dequeueAntrian();
  }
}


void viewQueue() {
  if (isEmpty()) {
    cout << "The queue is empty!" << endl;
    return;
  }

  cout << "Data antrian teller:" << endl;
  Node* current = head;
  int i = 1;
  while (current != NULL) {
    cout << i << ". " << current->dat181 << endl;
    i++;
    current = current->next;
  }
}

int main() {
    cout << "\n TELLER QUEUE - Febrian Falih Alwafi \n" << endl;
    cout << "=== Enqueue/Add Tellers ====" << endl;
    enqueueAntrian("Bahrul");
    enqueueAntrian("Supri");
    viewQueue();
    cout << "Jumlah antrian: " << countQueue() << endl;

    cout << "\n=== Dequeue/Remove Tellers ===" << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian: " << countQueue() << endl;

    cout << "\n=== Remove All Tellers ===" << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian: " << countQueue() << endl;

    return 0;
}
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/ae470bb6-fdd2-4b0d-9d70-3de2c377dbd6)</br>


# Penjelasan Program 
Kode di atas adalah implementasi antrian (queue) menggunakan struktur data linked list di C++. Setiap node dalam linked list memiliki data berupa string dan pointer ke node berikutnya. Antrian ini memiliki dua pointer, head untuk elemen pertama dan tail untuk elemen terakhir. Fungsi isEmpty() mengembalikan true jika antrian kosong. Fungsi enqueueAntrian() menambahkan elemen baru ke akhir antrian, mengatur head dan tail jika antrian awalnya kosong. Fungsi dequeueAntrian() menghapus elemen pertama dari antrian, dan jika setelah penghapusan antrian menjadi kosong, tail diatur menjadi NULL. Fungsi countQueue() menghitung dan mengembalikan jumlah elemen dalam antrian. Fungsi clearQueue() menghapus semua elemen dari antrian dengan memanggil dequeueAntrian() berulang kali hingga antrian kosong. Fungsi viewQueue() menampilkan semua elemen dalam antrian, menampilkan pesan jika antrian kosong. Dalam fungsi main(), beberapa operasi dilakukan: menambah elemen "Bahrul" dan "Supri" ke antrian, menampilkan antrian dan jumlah elemennya, menghapus satu elemen, menampilkan kembali antrian, mengosongkan antrian, dan akhirnya menampilkan antrian yang sudah kosong serta jumlah elemennya.

# UNGUIDED 2
```c++
#include <iostream>
using namespace std;

// Nama : Febrian Falih Alwafi
// Nim : 2311102181
// Kelas : S1F-11-E


struct Node {
  string NamaMahasiswa181;
  long long int NIMMahasiswa181;
  Node* next;
};


Node* head = NULL; 
Node* tail = NULL; 


bool isEmpty() {
  return head == NULL;
}


void enqueueAntrian(string nama, long long int NIM) {
  Node* newNode = new Node; // Buat node baru
  newNode->NamaMahasiswa181 = nama;
  newNode->NIMMahasiswa181 = NIM;
  newNode->next = NULL; 

  if (isEmpty()) { 
    head = newNode;
    tail = newNode;
  } else { 
    tail->next = newNode;
    tail = newNode;
  }
}


void dequeueAntrian() {
  if (isEmpty()) {
    cout << "Ya The queue is empty! There's nothing to dequeue! / Ya antriannya kosong ! Tidak ada yang bisa dihapus karena antriannya kosong " << endl;
    return;
  }

  Node* temp = head; 
  head = head->next; 
  delete temp; 

  if (head == NULL) { 
    tail = NULL;
  }
}


int countQueue() {
  int count = 0;
  Node* current = head;
  while (current != NULL) {
    count++;
    current = current->next;
  }
  return count;
}


void clearQueue() {
  while (!isEmpty()) {
    dequeueAntrian();
  }
}


void viewQueue() {
  if (isEmpty()) {
    cout << "Hey, the queue is empty / Hey, antrian ini kosong" << endl;
    return;
  }

  cout << "Mahasiswa Queue Data:" << endl;
  Node* current = head;
  int i = 1;
  while (current != NULL) {
    cout << i << ". " << current->NamaMahasiswa181 << " (" << current->NIMMahasiswa181 << ")" << endl;
    i++;
    current = current->next;
  }
}

int main() {
  cout << "\n Febrian Falih - Queue Mahasiswa " << endl;

  cout << "\n==== Enqueue/Add Queue Mahasiswa ====" << endl;
  enqueueAntrian("Febrian", 2311102181);
  enqueueAntrian("Fahri", 2311102180);
  enqueueAntrian("Deden", 7312011179);
  enqueueAntrian("Bagas", 4211102178);
  viewQueue();
  cout << "Jumlah antrian: " << countQueue() << endl;

  cout << "\n==== Dequeue/Remove Queue Mahasiswa ====" << endl;
  dequeueAntrian();
  viewQueue();
  cout << "Jumlah antrian: " << countQueue() << endl;

  cout << "\n==== Clear All Queues / kosongkan semua antrian ====" << endl;
  clearQueue();
  viewQueue();
  cout << "Jumlah antrian: " << countQueue() << endl;

  return 0;
}
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/ca9ec246-9b4a-4746-b888-78e132891526)</br>


# Penjelasan Program
Kode di atas adalah implementasi antrian (queue) menggunakan struktur data linked list dalam bahasa C++, dirancang untuk menyimpan data mahasiswa dengan nama dan NIM. Setiap node dalam linked list berisi data mahasiswa dan pointer ke node berikutnya. Antrian menggunakan dua pointer, head untuk elemen pertama dan tail untuk elemen terakhir.

Berikut adalah penjelasan fungsi-fungsinya:

- isEmpty(): Mengecek apakah antrian kosong.
- enqueueAntrian(string nama, long long int NIM): Menambahkan elemen baru ke akhir antrian. Jika antrian kosong, elemen baru menjadi head dan tail.
- dequeueAntrian(): Menghapus elemen pertama dari antrian. Jika antrian kosong, mencetak pesan bahwa antrian kosong.
- countQueue(): Menghitung dan mengembalikan jumlah elemen dalam antrian.
- clearQueue(): Menghapus semua elemen dalam antrian dengan memanggil dequeueAntrian() hingga antrian kosong.
- viewQueue(): Menampilkan semua elemen dalam antrian. Jika antrian kosong, mencetak pesan bahwa antrian kosong.

# REFERENSI
[1] Anita Sindar, R. M. S. Struktur Data Dan Algoritma Dengan C++. Vol. 1. CV. AA. RIZKY, 2019.</br>
[2] Gunawan, Rizaldy, Haris Yuana, and Sabitul Kirom. "IMPLEMENTASI METODE QUEUE PADA SISTEM ANTRIAN ONLINE BERBASIS WEB STUDI KASUS UPTD PUSKESMAS SANANWETAN." JATI (Jurnal Mahasiswa Teknik Informatika) 7.3 (2023): 1538-1545.</br>
[3] Serumpun, M., Octaviansyah, A. F., Assuja, M. A., Hermanto, R., & Jeck, F. (2023). SISTEM E-BOOKING PELAYANAN JASA SALON MENGGUNAKAN METODE MULTILEVEL FEEDBACK QUEUE (STUDY KASUS: SALON GRIYA). TELEFORTECH: Journal of Telematics and Information Technology, 3(1), 21-25.</br>
