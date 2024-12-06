#include <iostream>
using namespace std;
int main() {
int nDlugosc;
cout << "Podaj dlugosc tablicy: ";
cin >> nDlugosc;
int* aLiczby = new int[nDlugosc];
for (int i = 0; i < nDlugosc; i++) {
do {
cout << "Podaj liczbe do dodania ";
cin >> aLiczby[i];
} while (aLiczby[i] < 0);
}
int nMax = aLiczby[0], nMin = aLiczby[0];
for (int i = 1; i < nDlugosc; i++) {
if (aLiczby[i] > nMax) nMax = aLiczby[i];
if (aLiczby[i] < nMin) nMin = aLiczby[i];
}
int range = nMax - nMin + 1;
int* aLicznikIndex = new int[range]();
for (int i = 0; i < nDlugosc; i++) aLicznikIndex[aLiczby[i] - nMin]++;
int nMaxW = aLicznikIndex[0], nIndex = nMin;
for (int i = 1; i < range; i++) {
if (aLicznikIndex[i] > nMaxW) {
nMaxW = aLicznikIndex[i];
nIndex = i + nMin;
}
}
cout << "Najczesciej wystepujaca liczba" << nIndex << endl;
return 0;
}
