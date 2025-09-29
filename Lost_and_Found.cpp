#include <iostream>
#include <string>
using namespace std;

// Fungsi manual untuk reverse (tanpa built-in)
string myReverse(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
    return s;
}

// Fungsi untuk enkripsi (geser ASCII +2, lalu reverse)
string encrypt(string text) {
    // Simpan sementara ASCII +2
    for (int i = 0; i < text.length(); i++) {
        int asciiVal = (int)text[i];
        asciiVal += 2; // geser ASCII
        text[i] = (char)asciiVal;
    }
    // Reverse manual
    return myReverse(text);
}

// Fungsi untuk dekripsi (reverse dulu, lalu geser ASCII -2)
string decrypt(string text) {
    // Reverse manual
    text = myReverse(text);
    // Kembalikan ASCII -2
    for (int i = 0; i < text.length(); i++) {
        int asciiVal = (int)text[i];
        asciiVal -= 2; // geser balik
        text[i] = (char)asciiVal;
    }
    return text;
}

int main() {
    string kata;
    cout << "Masukkan kata asli: ";
    getline(cin, kata);

    string sandi = encrypt(kata);
    cout << "Hasil enkripsi: " << sandi << endl;

    string asli = decrypt(sandi);
    cout << "Hasil dekripsi: " << asli << endl;

    return 0;
}
