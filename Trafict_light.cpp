#include <iostream>
#include <string>
using namespace std;

int main() {
    string lights[3] = {"Merah", "Kuning", "Hijau"};
    int n;

    cout << "Masukkan jumlah siklus lampu: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Lampu ke-" << i + 1 << ": " << lights[i % 3] << endl;
    }

    return 0;
}
