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



