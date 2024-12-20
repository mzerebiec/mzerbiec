#include <iostream>
#include <vector>

using namespace std;

int main() {
    int nIloscElem;
    cout << "Podaj wielkosc tablicy: ";
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

    int nPivotIndx;
    if (vecElements.size() % 2 == 0) {
        nPivotIndx = vecElements.size() / 2;
        vecElements.insert(vecElements.begin() + nPivotIndx, 0);
    } else {
        nPivotIndx = vecElements.size() / 2;
        vecElements.at(nPivotIndx) = 0;
    }

    for (int i = 0; i < nPivotIndx; i++) {
        cout << vecElements[vecElements.size() - 1 - i] << '\t' << vecElements[i];
        cout << endl;
    }

    return 0;
}
