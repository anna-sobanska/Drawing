#include <iostream>
#include <iomanip>
using namespace std;

void triangleShape();
void rectangleShape();

int main(){

	int userChoice;

	cout << "What do you want to draw?" << endl;
	cout << "1. triangle" << endl;
	cout << "2. rectangle" << endl;

	cin >> userChoice;

	switch (userChoice)
	{
	case 1:
		triangleShape();
		break;
	case 2:
		rectangleShape();
		break;
	default:
		cout << "This is not valid!";
		break;
	}

	system("pause>0");
}

