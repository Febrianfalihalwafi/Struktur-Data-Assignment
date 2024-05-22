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