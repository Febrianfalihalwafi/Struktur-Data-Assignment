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