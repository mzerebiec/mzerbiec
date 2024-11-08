#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj a,b: " << endl;
    cin >> a;
    cin >> b;

    cout << "a: " << a << "; b: " << b << "\n\n";

    string B = "";
    for (int i = 0; i < a; i++) {
    B += '*';
    }
    cout << B << "\n\n"; 

    for (int i = 0; i < b; i++) {
    cout << "*\n"; 
    }
    cout << endl;

    for (int i = 0; i < b; i++) {
    string D = "";
    for (int j = 0; j < a; j++) {
    D += '*';
    }
    cout << D << "\n"; 
    }
    cout << endl;

    for (int i = 1; i <= b; i++) {
    string D = "";
    for (int j = 1; j <= a; j++) { 
    if (i == 1 || i == b) { 
    D += '*';
    }
    else { 
    if (j == 1 || j == a) { 
    D += '*';
    } else { 
    D += ' ';
    }
    }
    }
    cout << D << "\n"; 
    }
    cout << endl << endl;  
}