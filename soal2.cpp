#include <iostream>
using namespace std;

int main() {
    string kalimat;
    char huruf;
    int count = 0;

    getline(cin, kalimat);
    cin >> huruf;

    string hasil = "";

    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] != huruf) {
            hasil += kalimat[i];
        } else {
            count++;
        }
    }

    cout << hasil << endl;
    cout << "Karakter terhapus = " << count << endl;

    return 0;
}
