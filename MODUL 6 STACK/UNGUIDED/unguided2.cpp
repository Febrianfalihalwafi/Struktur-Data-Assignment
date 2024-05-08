#include <iostream>
#include <stack>

using namespace std;

// Nama : Febrian Falih Alwafi
// Nim : 2311102181

string Mengulang181(string kalimat181) {
  stack<char> s; // Buat stack untuk menyimpan karakter kalimat

  for (int i = 0; i < kalimat181.length(); i++) { // Masukkan karakter kalimat ke stack
    s.push(kalimat181[i]);
  }

  string sesudahmengulangi181; // Membalik kalimat dengan mengeluarkan karakter dari stack
  while (!s.empty()) {
    sesudahmengulangi181 += s.top();
    s.pop();
  }

  return sesudahmengulangi181;
}

int main() {
  string kalimat181;
  cout << "===== Febrian - Balikan kalimat =======" << endl;

  do {
  cout << "\n Cantumkan kalimat yang ingin dibalikkan: ";  // Input kalimat dari pengguna
  getline(cin, kalimat181);

  string sesudahmengulangi181 = Mengulang181(kalimat181);  // Membalik kalimat

  cout << " Kata atau kalimat yang dibalik: " << sesudahmengulangi181 << endl; // Menampilkan kalimat yang dibalik

  } while (kalimat181 != "exit");
  return 0;
}