#include <iostream>

using namespace std;

int main() {
    char literka;

    cout << "Wpisz literke" << endl;

    do {
        cin >> literka;
        if (literka != 't') {
            cout << "Dales: " << literka << endl;
        }
    } while (literka!= 't');

    cout << "Basta koniec!" << endl;

    return 0;
}