#include <iostream>

using namespace std;

int main() {
    int n(0), hasil(0);
    // di assign 0, karena saya sering kena variable sisa :v
  
    system("cls");

    cin >> n;

    for (int i(2); i <= n; i += 2)
        hasil += i * i;
    // i dimulai dari 2 karena berupa genap pertama (disoal gaada di tes negatif), jadi untuk efisiensi
    // i <= n agar n juga dihitung
    // i += 2 agar kena yg genap saja

    cout << hasil;
    return 0;
}
