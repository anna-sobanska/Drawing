#include <iostream>
#include <iomanip>
using namespace std;

void triangleShape () {
	int level;
	char symbol;

	cout << "Level: ";
	cin >> level;

	cout << "Symbol: ";
	cin >> symbol;

	for (int i = 1; i <= level; i++) {
		for (int j = 1; j <= i; j++) {
			cout << setw(2) << symbol;
		}
		cout << endl;
	}
}