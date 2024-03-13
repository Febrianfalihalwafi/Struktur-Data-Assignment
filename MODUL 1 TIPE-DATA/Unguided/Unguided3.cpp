#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Mendeklarasikan map dengan kunci bertipe string dan nilai bertipe int
    map<string, int> umur;

    // Menambahkan pasangan kunci-nilai ke dalam map
    umur["Destia"] = 20;
    umur["Hidayat"] = 21;
    umur["Febrian"] = 19;
    umur["nael"] = 23;

    // Mengakses nilai dari map menggunakan kunci dan mencetaknya
    cout << "Umur Destia : " << umur["Destia"] << endl;
    cout << "Umur Hidayat : " << umur["Hidayat"] << endl;
    cout << "Umur Febrian : " << umur["Febrian"] << endl;
    cout << "Umur nael : " << umur["nael"] << endl;
   
    return 0;
}