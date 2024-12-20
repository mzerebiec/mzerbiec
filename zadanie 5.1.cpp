#include <iostream>
#include <vector>

using namespace std;

int main() {
    int nIloscElem, nMax, nIndxOfMax;

    cout << "Podaj wielkosc wektora: ";
    cin >> nIloscElem;
    cout << endl;
    vector<int> vecElements;

    for (int i = 1; i <= nIloscElem; i++) {
        int nPodana;
        cout << "Podaj liczbe do dodania: ";
        cin >> nPodana;
        cout << endl;
        vecElements.push_back(nPodana);
    }

    nMax = vecElements[0];
    for (int i = 1; i < vecElements.size(); i++) {
        if (vecElements[i] > nMax) {
            nMax = vecElements[i];
            nIndxOfMax = i;
        }
    }

    cout << "Maksymalna wartosc to " << nMax << ", w indeksie " << nIndxOfMax << '.' << endl;

    return 0;
}