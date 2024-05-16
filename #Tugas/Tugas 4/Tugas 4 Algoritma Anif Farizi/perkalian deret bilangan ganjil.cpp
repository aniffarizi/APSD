#include <iostream>

int main() {
    int n;
    std::cout << "Masukkan jumlah baris segitiga: ";
    std::cin >> n;

    int hasil = 1;
    std::cout << "Hasil:\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << (2 * j - 1);
            hasil *= (2 * j - 1);
            if (j < i) {
                std::cout << " * ";
            }
        }
        std::cout << " = " << hasil << "\n";
    }

    return 0;
}