#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");

	int a, b, op;
	double result;

	cout << "¬вед≥ть в поле число: \n";
	cin >> a;

	cout << "¬вед≥ть оператор\n1\t+\n2\t-\n3\t*\n4\t/\n5\t^\n\n";
	cin >> op;

	cout << "¬вед≥ть ≥нше число: ";
	cin >> b;

	switch (op)
	{
	case 1:
		result = a + b;
	case 2:
		result = a - b;
	case 3:
		result = a * b;
	case 4:
		result = a / b;
	case 5: 
		result = pow(a, b);
	default:
		break;
	}

	cout << "–езультат: " << reuslt << endl;

}