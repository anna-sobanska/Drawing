#include <iostream>
#include <iomanip>
using namespace std;

void triangleShape();
void rectangleShape();
void multiTable();

int main()
{

	int userChoice;

	cout << "What do you want to draw?" << endl;
	cout << "1. triangle" << endl;
	cout << "2. rectangle" << endl;
	cout << "3. multiplication table" << endl;

	cin >> userChoice;

	switch (userChoice)
	{
	case 1:
		triangleShape();
		break;
	case 2:
		rectangleShape();
		break;
	case 3:
		multiTable();
		break;
	default:
		cout << "This is not valid!";
		break;
	}

	system("pause>0");
}

void triangleShape() 
{
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

void rectangleShape() 
{
	int height, width;
	char symbol;

	cout << "Height: ";
	cin >> height;
	cout << "Width: ";
	cin >> width;
	cout << "Symbol: ";
	cin >> symbol;

	for (int h = 0; h < height; h++) {
		for (int w = 0; w < width; w++) {
			cout << setw(3) << symbol;
		}
		cout << endl;
	}
}

void multiTable()
{
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i << " = " << i * j << endl;
		}
		cout << endl;
	}
}