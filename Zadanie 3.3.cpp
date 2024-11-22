#include <iostream>
#include <cmath>

using namespace std;

int main() {
      int A, B, C;
    float delta, x1, x2;
    cout << "Ax^2 + Bx + C" << endl;
    cout << "Podaj kolejno A,B i C:" << endl;
    cin >> A;
    cin >> B;
    cin >> C;

    cout << endl << A << "x^2 + " << B << "x + " << C << endl;

    delta = (B * B) - (4 * A * C);
    
    if (delta > 0) {
        x1 = (B*-1 + sqrt(delta)) / (2 * A);
        x2 = (B*-1 - sqrt(delta)) / (2 * A);
        cout << x1 << ' ' << x2 << endl;
    }else
        if (delta == 0) {
            x1 = B * -1 / 2 * A;
            cout << x1 << endl;
        }
        else {
            cout << "Delta ujemna!" << endl;
        }
            return 0;}