#include <iostream>
using namespace std;

int main()

{
	cout << "Mario Zerebiec\n";
	cout << "s32717\n";
	cout << "Polsko-Japonska Akademia Technik Komputerowych\n";
	return 0;
}

#include <iostream>
using namespace std;

int main()

{
	int number;

	cout << "Wpisz liczbe";
	cin >> number;

	if (number == 0) {
		cout << "Podana liczba jest: Zerem" << endl;
	}

	if (number >= 0) {
		cout << "Podana liczba jest: Dodatnia" << endl;
	}

	if (number <= 0) {
		cout << "Podana liczba jest: Ujemna" << endl;
	}
	return 0;
}