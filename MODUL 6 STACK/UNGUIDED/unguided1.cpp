#include <iostream>
#include <stack>

using namespace std;

// Nama : Febrian Falih Alwafi
// Nim : 2311102181

bool Palindrom_181(string kalimat181)
{
  for (int i = 0; i < kalimat181.length(); i++)
  { // Konversi kalimat ke huruf kecil
    kalimat181[i] = tolower(kalimat181[i]);
  }

  stack<char> s; // Buat stack untuk menyimpan karakter kalimat

  for (int i = 0; i < kalimat181.length(); i++)
  { // Masukkan karakter kalimat ke stack
    s.push(kalimat181[i]);
  }

  for (int i = 0; i < kalimat181.length() / 2; i++)
  { // Membandingkan karakter dari depan dan belakang kalimat
    if (kalimat181[i] != s.top())
    {
      return false;
    }
    s.pop();
  }

  return true;
}

int main()
{
  string kalimat181;
  cout << "===== Febrian Falih =======" << endl;

  do
  {
    cout << "\n Masukkan kalimat: "; // Input kalimat dari pengguna
    getline(cin, kalimat181);

    if (Palindrom_181(kalimat181))
    { // Memeriksa apakah kalimat palindrom atau bukan
      cout << " Kalimat " << kalimat181 << " adalah : Palindrom!" << endl;
    }
    else
    {
      cout << " Kalimat " << kalimat181 << " bukan : Palindrom!" << endl;
    }

  } while (kalimat181 != "exit");
  
  return 0;
}