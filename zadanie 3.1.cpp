#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

int main() {
    float x, y;

 
    cout << "Podaj pierwsza liczbe (x): ";
    cin >> x;
    cout << "Podaj druga liczbe (y): ";
    cin >> y;


    float suma = x + y;
    float roznica = x - y;
    float iloczyn = x * y;
    float iloraz = x / y;

    cout << fixed << setprecision(2);
    cout << "Suma: " << suma << endl;
    cout << "Roznica: " << roznica << endl;
    cout << "Iloczyn: " << iloczyn << endl;
    cout << "Iloraz: " << iloraz << endl;

    return 0;
}