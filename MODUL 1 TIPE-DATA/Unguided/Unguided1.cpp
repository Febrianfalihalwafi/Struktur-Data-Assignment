#include <iostream>
#include <string>

using namespace std;

int main(){
    int bil1, bil2, pil;
    float hasil;
    char operasi; // Mengubah tipe data operasi menjadi char
    cout << "PILIH OPERATOR DI KALKULATOR FEBRIAN" << endl;
    cout << "1.PENJUMLAHAN" <<endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << endl;
    
    cout << "Masukan pilihan : ";
    cin >> pil;

    cout << "Masukan bilangan pertama : ";
    cin >> bil1;
    cout <<"Masukan bilangan kedua :" ;
    cin >> bil2;

    switch(pil){
        case 1 : 
            hasil = bil1 + bil2; 
            operasi = '+';
            break;
        case 2 : 
            hasil = bil1 - bil2; 
            operasi = '-';
            break;
        case 3 : 
            hasil = bil1 * bil2; 
            operasi = '*';
            break;
        case 4 : 
            hasil = bil1 / bil2; 
            operasi = '/';
            break;
        default : cout << "Inputan tidak valid" << endl;
    }
    cout <<  " " << bil1 << operasi << bil2 << "=" << hasil << endl;
    return 0;

}     
