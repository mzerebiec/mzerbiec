#include <iostream>
using namespace std;

int uczestnicy, kawalki, x, y;

int main()

{
	cout << "ilu uczestnikow";
		cin >> uczestnicy;

		cout << "Ile kawalkow";

		cin >> kawalki;

		x = kawalki / (uczestnicy);


		cout << "Kawalki na glowe";

		y = kawalki - x * (uczestnicy);

		cout << endl << "Kawalkow na osobe przypada:" << y;

		return 0;


}