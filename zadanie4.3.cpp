#include <iostream>
using namespace std;

int main() {
int aTablica[10][10];
for (int iRow = 0; iRow < 10; iRow++) {
        aTablica[iRow][0] = iRow;
        aTablica[iRow][1] = iRow + iRow;
        aTablica[iRow][2] = iRow * iRow;
        aTablica[iRow][3] = iRow + 4;
        aTablica[iRow][4] = iRow - 5;

for (int iCol = 5; iCol < 10; iCol++) {
aTablica[iRow][iCol] = 0; }}
for (int iRow = 0; iRow < 10; iRow++) {
for (int iCol = 0; iCol < 10; iCol++) {
cout << aTablica[iRow][iCol] << '\t';}
cout << endl;}
return 0;
}
