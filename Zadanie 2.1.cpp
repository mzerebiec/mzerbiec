#include <iostream>
using namespace std;



int SumaSz(int n) {
int suman = 0; 

for(int i=1; i <= n; i++) { 
int sumanawiasow = 0; 

for (int x = 1; x <=i; x++){
sumanawiasow += x;
}

suman += sumanawiasow;
}
return suman;
}

int main() {
int n;
cout << "Wpisz n";
cin >> n;

int wynik = SumaSz(n);
cout << "Suma szeregu n = " << n << " to: " << wynik << endl;

return 0;

}