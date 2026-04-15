#include <iostream>

using namespace std;

int main() {
    int n(0);

    system("cls");

    cin >> n;

    for (char c : "Hore!")
    // looping for untuk array (string = array char)
        for (int i(0); i < n; i++) {
            cout << c;
            if (c == 'H' | c == 'r') break;
            // jika H atau r cuman output sekali jadi langsung break looping for ke 2
        }
    return 0;
}
