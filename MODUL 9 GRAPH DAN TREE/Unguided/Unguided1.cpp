#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Nama : Febrian Falih Alwafi
// Kelas : S1F-11-E
// Nim : 2311102181

int main() {
    int jumlahSimpul2311102181;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul2311102181;

    string simpul[jumlahSimpul2311102181];
    int busur[jumlahSimpul2311102181][jumlahSimpul2311102181];

    for (int i = 0; i < jumlahSimpul2311102181; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    for (int i = 0; i < jumlahSimpul2311102181; i++) {
        for (int j = 0; j < jumlahSimpul2311102181; j++) {
            cout << "Silakan masukkan bobot antara simpul " << simpul[i] << " dan " << simpul[j] << ": ";
            cin >> busur[i][j];
        }
    }

    cout << "\nGraf yang dihasilkan:\n";
    cout << setw(15) << " ";
    for (int i = 0; i < jumlahSimpul2311102181; i++) {
        cout << setw(15) << simpul[i];
    }
    cout << endl;

    for (int i = 0; i < jumlahSimpul2311102181; i++) {
        cout << setw(15) << simpul[i];
        for (int j = 0; j < jumlahSimpul2311102181; j++) {
            cout << setw(15) << busur[i][j];
        }
        cout << endl;
    }

    return 0;
}