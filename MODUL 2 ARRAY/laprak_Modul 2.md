# <h1 align="center">Laporan Praktikum Modul 2 - ARRAY</h1>
<h2>Nama : Febrian Falih Alwafi</h2>
<h2>Nim : 2311102181</h2>

# Dasar Teori 

Array merupakan struktur data yang paling dasar. Sebelum mempelajari struktur data
lainnya, alangkah baiknya, kita perlu mempelajari Array terlebih dahulu. Berikut ini
adalah beberapa jenis array :

1) Array Satu Dimensi</br>
Array satu dimensi adalah tipe variabel yang terdiri dari kumpulan data dengan tipe yang sama yang disusun dalam satu baris atau satu dimensi. Setiap elemen di dalam array memiliki sebuah indeks atau nomor yang digunakan untuk mengakses elemen tersebut. Indeks dimulai dari 0 dan berakhir pada jumlah elemen dikurangi satu.
Contohnya, sebuah array satu dimensi yang berisi bilangan bulat {1, 2, 3, 4, 5} memiliki lima elemen dan indeksnya dimulai dari 0. Indeks 0 merujuk pada elemen pertama, indeks 1 merujuk pada elemen kedua, dan seterusnya hingga indeks 4 merujuk pada elemen kelima Contoh : 

```C++
#include <iostream>
using namespace std;
int main() {
int arr[5] = {9, 3, 5, 2, 1}; //deklarasi array
cout<< arr[1] << endl;
cout<< arr[4];
}
```


2) Array Dua Dimensi</br>
Array dua dimensi adalah variable yang terdiri dari kumpulan array satu dimensi dengan tipe yang sama yang disusun dalam baris dan kolom. Dalam array dua dimensi, setiap elemen memiliki dua indeks, yaitu indeks baris dan indeks kolom. Indeks baris menunjukkan posisi elemen dalam baris, sementara indeks kolom menunjukkan posisi elemen dalam kolom.
Contoh :

```C++ 
#include <iostream>
using namespace std;
int main() {
int arr[2][2] = {{3, 2}, {2, 5}};
for (int i=0; i<2; i++) { //baris
for(int j=0; j<2; j++) { //kolom
cout<< arr[i][j] << ends;
};
cout << endl;
};
}
```  

3) Array Multidimensi</br>
Array multidimensi memiliki kesamaan dengan array satu dimensi dan dua dimensi, namun memiliki kapasitas memori yang lebih besar. Array ini digunakan untuk merepresentasikan array dengan dimensi lebih dari dua atau array yang memiliki lebih dari dua indeks, seperti array tiga dimensi, array empat dimensi, array lima dimensi, dan seterusnya.
Contoh : 

```C++
#include <iostream>
using namespace std;
int main() {
int arr[2][2][3] = {{{2, 8, 7}, {6, 5, 1}}, {{8, 5, 2}, {9, 2 ,7}}}; 
for (int i=0; i<2; i++) {
for(int j=0; j<2; j++) {
for(int k=0; k<3; k++) {
cout<< arr[i][j][k] << ends;
};
cout<< endl;
};
cout<< endl;
};
}
``` 

4) Array Empat Dimensi</br>
Array berdimensi empat merupakan kumpulan dari paket-paket kartu yang setiap paket mempunyai jumlah kartu yang sama, setiap kartu dengan jumlah baris yang sama, dan setiap baris mempunyai jumlah kolom yang sama.
contoh : 

```C++ 
int arr [3][2][4][4];
```

5) Array Lima Dimensi</br>
```C++ 
int arr [2][4][4][3][3];
```
# Guided

# 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;
// program input array 3 dimensi
int main()
{
    // deklarasi array
    int arr[2][3][3];
    // input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "]: ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // output array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Array[" << x << "][" << y << "][" << z << "]: " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
           cout << endl;
        }
        cout << endl;
        }
}

```

# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/58d08329-a676-4dc5-aa32-f0be90d003eb)</br>
Program tersebut adalah sebuah program yang memungkinkan pengguna untuk memasukkan data ke dalam array tiga dimensi dan kemudian menampilkannya. Program ini juga akan meminta pengguna untuk memasukkan nilai-nilai untuk setiap elemen dalam array tiga dimensi dan kemudian menampilkan nilai-nilai tersebut beserta penjelasan output.

# 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi; 
    cout << "masukan panjang array: ";
    cin >> a; 
    int array[a];
    cout << "masukan" << a << "angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ":";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah" << maks << "berada di array ke" << lokasi << endl; 
}
```
# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/4cf39ded-214d-4bff-b24a-4e3fed6baf72)</br>
program ini memungkinkan pengguna untuk memasukkan nilai ke dalam array tiga dimensi dan kemudian mencari dan menampilkan nilai maksimum dari array tersebut. Program dimulai dengan mendeklarasikan variabel-variabel yang diperlukan, seperti variabel untuk menyimpan nilai maksimum, setelah menemukan nilai maksimum, program menampilkan nilai maksimum beserta lokasinya dalam array.

# Unguided 

# 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/b0d4aae8-64b0-4364-810a-ce590771b83d)

```C++
#include <iostream>

using namespace std;
// Nama : Febrian Falih Alwafi
// Nim : 2311102181
// Kelas : IF-11-E

// Memasukan jumlah elemen array
int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    // Masukan elemen array
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Data array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nomor genap: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i];
            if (i != n - 1) {
                cout << ", ";
            }
        }
    }
    cout << endl;

    cout << "Nomor ganjil: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            cout << arr[i];
            if (i != n - 1) {
                cout << ", ";
            }
        }
    }
    cout << endl;

    return 0;
}

```

# Output 
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/fc9ef619-6dbd-4ff4-9040-843c7244bf3c)</br>
Program di atas meminta pengguna untuk memasukkan jumlah elemen array, kemudian meminta pengguna untuk memasukkan nilai-nilai untuk setiap elemen array. Setelah itu, program menampilkan data array yang telah dimasukkan, serta memisahkan nilai genap dan ganjil dari array tersebut.

# 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    int x_181, y_181, z_181;

    // Meminta pengguna untuk memasukkan ukuran elemen array tiga dimensi
    cout << "Masukkan ukuran array tiga dimensi:" << endl;
    cout << "Ukuran dimensi x: ";
    cin >> x_181;
    cout << "Ukuran dimensi y: ";
    cin >> y_181;
    cout << "Ukuran dimensi z: ";
    cin >> z_181;

    // Deklarasi array tiga dimensi sesuai dengan ukuran yang dimasukkan pengguna
    int arr[x_181][y_181][z_181];

    // Input elemen array
    for (int x = 0; x < x_181; x++) {
        for (int y = 0; y < y_181; y++) {
            for (int z = 0; z < z_181; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Output elemen array
    cout << "Data Array:" << endl;
    for (int x = 0; x < x_181; x++) {
        for (int y = 0; y < y_181; y++) {
            for (int z = 0; z < z_181; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    // Tampilan array
    cout << "Tampilan array:" << endl;
    for (int x = 0; x < x_181; x++) {
        for (int y = 0; y < y_181; y++) {
            for (int z = 0; z < z_181; z++) {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

```

# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/81d9782d-6ddb-4590-bdd5-fc5a95cbcf84)
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/3bd2d471-e93a-42e7-9fe1-b4e0d29f75b2)</br>
Program di atas adalah program dalam bahasa C++ yang memungkinkan pengguna untuk memasukkan elemen-elemen ke dalam array tiga dimensi dengan ukuran yang ditentukan oleh pengguna.

# 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

```C++
#include <iostream>
using namespace std;

int input;
int bil[10];
int minim, maksim;
double rata;
// Febrian Falih Alwafi
// 2311102181
int main(){

    while(true){
    cout << "\t" "\t" << "MENU" << endl;
    cout << "\t" << "1. INPUT ARRAY" << endl;
    cout << "\t" << "2. TAMPIL ARRAY" << endl;
    cout << "\t" << "3. CARI NILAI MINIMMUM" << endl;
    cout << "\t" << "4. CARI NILAI MAKSIMUM" << endl;
    cout << "\t" << "5. HITUNG RATA - RATA" << endl;

    cout << "MASUKAN PILIHAN : ";
    cin >> input;

    cout << endl;

    switch (input)
    {
    case 1 : 
        {
            for(int i = 0; i < 10; i++){
                cout << "MASUKAN BILANGAN KE - " << i + 1 << " : ";
                cin >> bil[i];
            }
            cout << endl;
        break;
        }
    case 2 : 
        {
            cout << "ARRAY YANG DI INPUT : ";
            for (int i = 0; i < 10; i++){
                cout << bil[i] << " ";
            }
        cout << endl;
        }
    cout << endl;
    break;
    case 3 :
        {
            minim = bil[0];
            for(int i = 0; i < 10; i++){
                if(bil[i] < minim){
                    minim = bil[i];
                }
            }
            cout << "NILAI MINIMUM DARI ARRAY TERSEBUT : " << minim << endl;
            cout << endl;
        }
    break;
    case 4 :
        {
            maksim = bil[0];
            for (int i = 0; i < 10; i++){
                if(bil[i] > maksim){
                    maksim = bil[i];
                }
            }
            cout << "NILAI MAKSIMUM DARI ARRAY TERSEBUT : " << maksim << endl;
            cout << endl;
        }
    break;
    case 5 :
        {
            for(int i = 0; i < 10; i++){
                rata += bil[i] / 12;
            }
            cout << "RATA - RATA DARI ARRAY TERSEBUT : " << rata;
        }
        cout << endl;
        cout << endl;
        break;
    }
}
    return 0;
}

```

# Output
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/0f522dbf-cdfc-4b2d-a220-fd3d942c6843)
![image](https://github.com/Febrianfalihalwafi/Struktur-Data-Assignment/assets/162521180/2fed0b20-de39-4da8-a838-23996fb0c40d)<br>
Program ini memberikan pengguna kontrol atas array, termasuk memasukkan nilai, menampilkan nilai, mencari nilai minimum dan maksimum, serta menghitung rata-rata dari array. Ini membantu pengguna untuk memahami penggunaan array dalam bahasa C++ dan beberapa operasi sederhana yang dapat dilakukan pada array tersebut.

# Kesimpulan 
Dari materi serta tugas diatas, dapat disimpulkan bahwa bermacam-macam jenis array yang dapat kita gunakan di dalam program c++ sehingga kita dapat menggunakan array sesuai dengan kebutuhan yang ada. Array juga dapat melakukan input data, menampilkan hasil operasi menggunakan array, melakukan operasi data.

# Referensi
1. Ahmad, M. (2019, Desember 24). BELAJAR C++ #09: MENGGUNAKAN ARRAY UNTUK MENYIMPAN BANYAK DATA.
2. Coding Studio Team. (2023, Februari 21). FUNGSI ARRAY: PENGERTIAN JENISNYA.
3. Sigit, N. (2023, Maret 06). CONTOH ARRAY 3 DIMENSI DI C++: IMPLEMENTASI DAN CONTOH DENGAN KONSEP MULTIDIMENSI ARRAY.




