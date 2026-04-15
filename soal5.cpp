#include <iostream>

using namespace std;

int main() {
    int bil(0), count(0);

    system("cls");

    cin >> bil;

    for (int i(1); i <= bil; i++) {
      // ngecek semua angka (tidak efisien)
        if (bil%i==0) count++;
        // kalo bisa dibagi count bertambah
        if (count > 2 || bil < 2) {
            cout << "Bilangan Bukan Prima";
            return 0;
        }
        // jika bukan prima langsung berhenti programnya
    }
    cout << "Bilangan Prima";
    return 0;
}
