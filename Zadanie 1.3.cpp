#include <iostream>
using namespace std;

int main()

{
	int number;

	cout << "Wpisz liczbe:" << endl;
	cin >> number;

	if (number % 2 <=2) {
		cout << "Podana liczba jest: Parzysta" << endl;
	}
	if (number %2 <0) {
		cout << "Podana liczba jest: Nieparzysta" << endl;
	}

	if (number==0) {
		cout << "Podana liczba jest: 0" << endl;
	}

	return 0;
}