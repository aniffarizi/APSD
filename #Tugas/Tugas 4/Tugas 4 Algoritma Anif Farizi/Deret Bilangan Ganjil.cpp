#include <iostream>
using namespace std;

int main() {
    int n = 10; // jumlah deret
    int sum = 0; // inisialisasi variabel penjumlahan
    int odd = 1; // inisialisasi bilangan ganjil pertama

    cout << "Deret bilangan ganjil: ";
    for(int i = 0; i < n; ++i) {
        cout << odd;
        sum += odd;
        odd += 2; // lanjut ke bilangan ganjil berikutnya
        if(i != n-1) // jika belum mencapai deret terakhir
            cout << " + ";
    }
    cout << " = " << sum << endl;

    return 0;
}