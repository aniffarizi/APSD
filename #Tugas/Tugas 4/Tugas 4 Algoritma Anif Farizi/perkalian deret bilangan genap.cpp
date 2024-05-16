#include <iostream>

int main() {
    int n = 5; // Jumlah baris segitiga
    int sum = 0; // Inisialisasi variabel untuk menyimpan hasil penjumlahan

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            // Cetak bilangan genap dari 10 hingga (10 - (i-1)*2)
            int even_number = 10 - (i - 1) * 2;
            std::cout << even_number;
            
            // Tambahkan bilangan ke variabel penjumlahan
            sum += even_number;
            
            // Tambahkan tanda '+' jika bukan bilangan terakhir dalam baris
            if (j < i) {
                std::cout << " + ";
            }
        }
        // Cetak hasil penjumlahan untuk baris tersebut
        std::cout << " = " << sum << std::endl;
    }

    return 0;
}