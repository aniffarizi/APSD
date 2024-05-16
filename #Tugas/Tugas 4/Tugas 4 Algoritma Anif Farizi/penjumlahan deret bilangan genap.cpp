#include <iostream>

using namespace std;

int main() {
    int rows;
    cout << "Masukkan jumlah baris: ";
    cin >> rows;

    int sum = 0;
    for (int i = 1; i <= rows; i++) {
        sum += 2 * i;
        for (int j = 1; j <= i; j++) {
            if (j == 1)
                cout << "2";
            else
                cout << " + " << 2 * j;
        }
        cout << " = " << sum << endl;
    }

    return 0;
}