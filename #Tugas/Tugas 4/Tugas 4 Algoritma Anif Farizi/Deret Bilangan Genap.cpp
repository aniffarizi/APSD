#include <iostream>

int main() {
    int jumlah = 0;
    for (int i = 2; i <= 20; i += 2) {
        jumlah += i;
        std::cout << i;
        if (i < 20) {
            std::cout << " + ";
        }
    }
    std::cout << " = " << jumlah << std::endl;
    return 0;
}