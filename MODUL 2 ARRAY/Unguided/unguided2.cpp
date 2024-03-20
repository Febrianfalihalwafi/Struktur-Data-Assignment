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