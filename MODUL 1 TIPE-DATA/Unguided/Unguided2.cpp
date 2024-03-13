#include <iostream>
#include <string>
using namespace std;

// Definisikan sebuah struct bernama 'Orang'
struct Person {
    string nama;
    int asal ;
    float beratbadan;
};

int main() {
    // Membuat instance dari struct 'Orang'
    Person febrian;

    // Menetapkan nilai pada anggota struct
    febrian.nama = "febrian falih";
    febrian.asal = 19;
    febrian.beratbadan = 60;

   // Cetak nilainya
    cout << "Nama: " << febrian.nama << endl;
    cout << "asal: " << febrian.asal << endl;
    cout << "beratbadan : " << febrian.beratbadan<< endl;

    return 0;
}