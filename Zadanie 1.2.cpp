#include <iostream>
using namespace std;

int main()

{
	int number;

	cout << "Wpisz liczbe:" << endl;
	cin >> number;

	if (number  >0) {
		cout << "Podana liczba jest: Dodatnia" << endl;
	}
	if (number <0) {
		cout << "Podana liczba jest: Ujemna" << endl;
	}

	if (number==0) {
		cout << "Podana liczba jest: 0" << endl;
	}

	return 0;
}