# <h1 align="center">Laporan Praktikum Modul 8 - SEARCHING </h1>
<h3> Nama : Febrian Falih Alwafi </h3>
<h3>Nim : 2311102181</h3>
<h3>Kelas : S1F-11-E</h3>

# TUJUAN PRAKTIKUM
1. Menunjukkan beberapa algoritma dalam Pencarian.
2. Menunjukkan bahwa pencarian merupakan suatu persoalan yang bisa diselesaikan
dengan beberapa algoritma yang berbeda.
3. Dapat memilih algoritma yang paling sesuai untuk menyelesaikan suatu
permasalahan pemrograman.

# DASAR TEORI

Searching adalah mencari data yang dibutuhkan. Searching dalam pemrograman bisa dilakukan untuk mencari data yang ada di dalam memory komputer. Dalam kehidupan sehari-hari kita juga sering melakukan kegiatan searching seperti mencari data/informasi yang ada dalam internet.

Pencarian di perlukan untuk mencari informasi khusus dari tabel pada saat lokasi yang pasti dari informasi tersebut sebelumnya tidak diketahui. Pencarian selalu dinyatakan dengan referensi pada adanya sekolompok data yang tersimpan secara terorganisasi, kelompok data tersebut kita sebut tabel.

Array memungkinkan untuk menyimpan nilai yang bertipe sama. Operasi yang umum dalam array adalah Sequential Search dan Binary search. 

Jenis - Jenis Searching :
1. Sekuensial ( Sequential Searching )
     Sequential Search merupakan metode pencarian data dalam array dengan cara membandingkan data yang dicari dengan data yang ada di dalam array secara berurutan. Pencarian data dengan Metode Sequential Search efektif untuk mencari data yang dalam posisi yang tidak terurut atau acak. Data yang dicari tadi dibandingkan dengan masing-masing data yang ada di dalam array. Jika data yang dicari ditemukan maka kita dapat membuat statement bahwa data telah temukan.Namun, Jika data yang dicari tidak ditemukan maka kita dapat membuat statement bahwa data telah temukan.
   Proses Sequential Search dapat dijelaskan sebagai berikut:
- Menentukan data yang akan dicari.
-  Membaca data array satu per satu secaras ekuensial
-  Membaca data mulai dari data pertama sampai dengan data terakhir, kemudian data yang dicari akan dibandingkan dengan masing-masing data yang terdapat dalam array.
a. Apabila data yang dicari ditemukan maka kita dapat membuat pernyataan bahwa data telah ditemukan.
b. Jika data yang dicari tidak ditemukan maka kita dapat membuat pernyataan bahwa data tidak temukan.

2. Binary Search
Metode  Binary Search adalah suatu metode pencarian data dengan cara mengelompokkan array menjadi bagian-bagian. Binary Search hanya dapat diterapkan pada data yang telah terurut baik ascending maupun descending dalamsuatu array. 

Proses Binary Search dengan data ascending dan telah urut:
1. Membuat perulangan kemudian menentukan posisi low yaitu posisi yang menandakan index paling rendah kemudian menentukan posisi high, setelah itu mencari posisi mid atau tengah = (high + low)/2
2. Membandingkan data yang dicari dengan nilai yang berada di posisi mid atau tengah.
3. Jika data yang dicari sama dengan nilai yang ada di posisi mid atau tengah berarti data ditemukan.
4. Jika data yang dicari lebih kecil dari nilai yang terdapat pada mid maka pencarian data akan dilakukan dibagian kiri mid dengan melakukan pembandingan. Dengan kondisi posisi high berubah yaitu (mid - 1) dan posisi low tetap.
5. Jika data yang dicari lebih besar dari nilai yang terdapat pada mid  maka pencarian data akan dilakukan di bagian kanan dari mid dengan posisi low yang berubah yaitu (mid + 1) dan posisi high tetap.

# GUIDED 1

```C++
#include <iostream> 
using namespace std; 
int main() 
{ 
    int n = 10; 
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}; 
    int cari = 10; 
    bool ketemu = false; 
    int i; 
    // algoritma Sequential Search 
    for (i = 0; i < n; i++) 
    { 
        if (data[i] == cari) 
        { 
            ketemu = true; 
            break; 
        } 
    } 
    cout << "\t Program Sequential Search Sederhana\n " << endl; 
    cout<< "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl; 
    if (ketemu){ 
        cout << "\n angka " << cari << " ditemukan pada indeks ke " << i << endl; 
    } 
    else 
    { 
        cout << cari << " tidak dapat ditemukan pada data." <<endl; 
    } 
    return 0; 
 
} 
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/212ee76b-6772-4220-ad25-6a8f37320935)
</br>

# Penjelasan Guided 1 
Program di atas adalah implementasi sederhana dari algoritma Sequential Search dalam bahasa C++.  Dalam fungsi main, sebuah array data dengan 10 elemen diinisialisasi. Program juga menetapkan variabel cari dengan nilai 10, yang merupakan nilai yang akan dicari dalam array. Variabel boolean ketemu diinisialisasi dengan nilai false untuk menandakan apakah nilai yang dicari ditemukan. Algoritma Sequential Search kemudian diterapkan menggunakan loop for yang mengiterasi setiap elemen dalam array. Jika elemen saat ini sama dengan nilai yang dicari (cari), program mengubah nilai ketemu menjadi true dan menghentikan loop dengan break. Setelah loop, program menampilkan pesan ke layar menggunakan cout. Jika nilai ditemukan, program mencetak indeks dari elemen yang ditemukan. Jika tidak, program mencetak pesan bahwa nilai tidak ditemukan dalam array.

# Guided 2
```C++
#include <iostream> 
#include <iomanip> 
using namespace std; 
 
// Deklarasi array dan variabel untuk pencarian 
int arrayData[7] = {1, 8, 2, 5, 4, 9, 7}; 
int cari; 
 
void selection_sort(int arr[], int n) { 
    int temp, min; 
    for (int i = 0; i < n - 1; i++) { 
        min = i; 
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] < arr[min]) { 
                min = j; 
            } 
        } 
        // Tukar elemen 
        temp = arr[i]; 
        arr[i] = arr[min]; 
        arr[min] = temp; 
    } 
} 
 
void binary_search(int arr[], int n, int target) { 
    int awal = 0, akhir = n - 1, tengah, b_flag = 0; 
     
    while (b_flag == 0 && awal <= akhir) { 
        tengah = (awal + akhir) / 2; 
        if (arr[tengah] == target) { 
            b_flag = 1; 
 
            break; 
        } else if (arr[tengah] < target) { 
            awal = tengah + 1; 
        } else { 
            akhir = tengah - 1; 
        } 
    } 
     
    if (b_flag == 1) 
        cout << "\nData ditemukan pada index ke-" << tengah << 
endl; 
    else 
        cout << "\nData tidak ditemukan\n"; 
} 
 
int main() { 
    cout << "\tBINARY SEARCH" << endl; 
    cout << "\nData awal: "; 
    // Tampilkan data awal 
    for (int x = 0; x < 7; x++) { 
        cout << setw(3) << arrayData[x]; 
    } 
    cout << endl; 
     
    cout << "\nMasukkan data yang ingin Anda cari: "; 
    cin >> cari; 
     
    // Urutkan data dengan selection sort 
    selection_sort(arrayData, 7); 
     
    cout << "\nData diurutkan: "; 
    // Tampilkan data setelah diurutkan 
    for (int x = 0; x < 7; x++) { 
        cout << setw(3) << arrayData[x]; 
    } 
    cout << endl; 
     
    // Lakukan binary search 
    binary_search(arrayData, 7, cari); 
     
    return 0; 
} 


```

# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/77d00c10-482f-49bb-aa2e-cff22cd46649)</br>

# Penjelasan Guided 2
Kode di atas adalah program dalam bahasa C++ yang menggabungkan algoritma Selection Sort dan Binary Search untuk mencari elemen dalam array yang sudah diurutkan. Program ini diawali dengan mendeklarasikan sebuah array arrayData yang berisi 7 elemen dan sebuah variabel cari untuk menyimpan data yang akan dicari. Fungsi selection_sort digunakan untuk mengurutkan array. Algoritma Selection Sort bekerja dengan menemukan elemen terkecil dari bagian yang tidak diurutkan dan menukarnya dengan elemen pertama dari bagian yang tidak diurutkan, lalu mengulangi proses untuk elemen berikutnya hingga seluruh array terurut. Setelah data diurutkan, program melanjutkan ke fungsi binary_search yang melakukan pencarian biner. Algoritma Binary Search bekerja dengan membagi array yang terurut menjadi dua bagian dan membandingkan elemen tengah dengan elemen yang dicari. Jika elemen yang dicari sama dengan elemen tengah, pencarian selesai. Jika elemen yang dicari lebih kecil, pencarian dilanjutkan pada setengah bagian kiri, jika lebih besar, pencarian dilanjutkan pada setengah bagian kanan. Proses ini diulangi hingga elemen ditemukan atau interval pencarian habis.

# UNGUIDED 1 
```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

// Nama : Febrian Falih Alwafi
// Kelas : S1F-11-E 
// Nim : 2311102181


void selection_sort(vector<char>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}


void binary_search(const vector<char>& arr, char target) {
    int awal = 0, akhir = arr.size() - 1, tengah;
    bool found = false;

    while (!found && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == target) {
            found = true;
            break;
        } else if (arr[tengah] < target) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }

    if (found)
        cout << "\nHuruf '" << target << "' ditemukan pada index ke-" << tengah << endl;
    else
        cout << "\nHuruf '" << target << "' tidak ditemukan\n";
}

int main() {
    string kalimat;
    char huruf;
  
    cout << "\tBINARY SEARCH" << endl;
    cout << "\nMasukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << "\nMasukkan huruf yang ingin dicari: ";
    cin >> huruf;

    vector<char> charArray181(kalimat.begin(), kalimat.end());

    cout << "\nData awal: ";
    for (char c : charArray181) {
        cout << setw(3) << c;
    }
    cout << endl;

    selection_sort(charArray181);

    cout << "\nData diurutkan: ";
    for (char c : charArray181) {
        cout << setw(3) << c;
    }
    cout << endl;
    binary_search(charArray181, huruf);

    return 0;
}
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/390e19fa-7978-4986-93fb-467bcc6d350b)
</br>


# Penjelasan Program 
Program di atas adalah implementasi algoritma pencarian huruf dalam sebuah kalimat menggunakan Binary Search setelah data diurutkan menggunakan Selection Sort.  setelah kalimat tersebut diurutkan menggunakan Selection Sort. Di dalam fungsi main, program meminta pengguna untuk memasukkan sebuah kalimat dan huruf yang ingin dicari. Kalimat tersebut kemudian dikonversi menjadi sebuah vector<char> yang akan mempermudah pengolahan karakter satu per satu. Fungsi selection_sort diimplementasikan untuk mengurutkan karakter dalam vector<char>. Algoritma ini bekerja dengan menemukan elemen terkecil dari bagian yang tidak diurutkan dan menukarnya dengan elemen pertama dari bagian tersebut, lalu mengulangi proses ini untuk elemen berikutnya hingga seluruh vector terurut.

# UNGUIDED 2
```c++
#include <iostream>
#include <string>
using namespace std;

// Nama : Febrian Falih Alwafi
// Kelas : S1F-11-E
// Nim : 2311102181

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string kalimat181;
    int count = 0;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat181);

    for (int i = 0; i < kalimat181.length(); i++) {
        char c = tolower(kalimat181[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    cout << "Kalimat: \"" << kalimat181 << "\"" << endl;
    cout << "Jumlah huruf vokal dalam kalimat: " << count << endl;

    return 0;
}
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/e0c72ba1-32dd-4ceb-b7a6-47ab379af54a)
</br>


# Penjelasan Program
Program di atas bertujuan untuk menghitung jumlah huruf vokal dalam sebuah kalimat yang diinput oleh pengguna. Fungsi isVowel didefinisikan untuk memeriksa apakah sebuah karakter adalah huruf vokal (a, e, i, o, u). Fungsi ini mengonversi karakter input menjadi huruf kecil menggunakan tolower dan kemudian memeriksa apakah karakter tersebut termasuk salah satu huruf vokal.

# UNGUIDED 3
```c++
#include <iostream>
using namespace std;

// Nama : Febrian Falih Alwafi
// Kelas : S1F-11-E
// Nim : 2311102181


int main() {
    int data[] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int n = sizeof(data) / sizeof(data[0]);
    int angka = 4;
    bool ketemu181 = false;
    int count = 0;

    // Algoritma Sequential Search untuk menghitung kemunculan angka 4
    for (int i = 0; i < n; i++) {
        if (data[i] == angka) {
            ketemu181 = true;
            count++;
        }
    }

    cout << "\tSequential Search untuk Menghitung banyaknya Angka 4\n" << endl;
    cout << "Data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;
    if (ketemu181) {
        cout << "Jumlah angka 4 dalam data: " << count << endl;
    } else {
        cout << "Angka 4 tidak ditemukan dalam data." << endl;
    }

    return 0;
}
```

# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/af6548fd-8d7d-43fc-87f8-f14f990d9280)</br>

# Penjelasan Program
Program di atas adalah implementasi dari algoritma Sequential Search untuk menghitung jumlah kemunculan angka 4 dalam sebuah array. Program dimulai dengan mendeklarasikan array data yang berisi sekumpulan bilangan bulat. Variabel n dihitung sebagai jumlah elemen dalam array tersebut. Kemudian, variabel angka diinisialisasi dengan nilai 4 yang akan dicari dalam array. Selanjutnya, program menggunakan loop for untuk iterasi melalui setiap elemen dalam array. Pada setiap iterasi, program memeriksa apakah elemen saat ini sama dengan nilai yang dicari (angka). Jika iya, maka variabel ketemu181 diatur sebagai true dan variabel count untuk menghitung jumlah kemunculan angka 4 ditingkatkan. Setelah selesai iterasi, program menampilkan pesan yang mencakup data awal serta jumlah kemunculan angka 4 yang ditemukan.

# REFERENSI
[1] Onsardi, Onsardi, Muntahanah Muntahanah, and Rozali Toyib. "Penerpan Algoritma Binary Search Dalam Pencarian Data Potensi Investasi Di Kabupaten Seluma Dengan Smartphone." Journal Scientific and Applied Informatics 3.3 (2020): 129-136.
[2] Wamiliana, Wamiliana, Ade Hardiyanti, and Wisnu Wardhana. "Penerapan Algoritma Sequential Search dalam Proses Pencarian Informasi pada Sistem Pembelajaran Organ Jantung Manusia." Jurnal Komputasi 2.2 (2016).
[3] Imamah, Nurul. "Perbandingan Algoritma Sequential Search Dan Algoritma Binary Search Pada Aplikasi Kamus Bahasa Indonesia Menggunakan Php Dan Jquery." COMPUTING| Jurnal Informatika 8.01 (2021): 1-6.
[4] Yuniar, Wenni Lita, and Fatkhul Amin. "Sistem pencarian naskah dinas dengan algoritma sequential search." Jurnal Manajemen Informatika dan Sistem Informasi 4.2 (2021): 92-100.
