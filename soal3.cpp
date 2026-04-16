#include <iostream>
using namespace std;

bool kabisat(int tahun) {
    if (tahun % 400 == 0)
        return true;
    if (tahun % 100 == 0)
        return false;
    if (tahun % 4 == 0)
        return true;
    return false;
}

int main() {
    int A, B;
    cin >> A >> B;

    if (B >= 0) {
        for (int i = 0; i <= B; i++) {
            int tahun = A + i;

            if (kabisat(tahun))
                cout << tahun << " kabisat" << endl;
            else
                cout << tahun << " bukan kabisat" << endl;
        }
    } else {
        for (int i = 0; i >= B; i--) {
            int tahun = A + i;

            if (kabisat(tahun))
                cout << tahun << " kabisat" << endl;
            else
                cout << tahun << " bukan kabisat" << endl;
        }
    }

    return 0;
}
