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