#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");

	int a, b, op;
	double result;

	cout << "������ � ���� �����: \n";
	cin >> a;

	cout << "������ ��������\n1\t+\n2\t-\n3\t*\n4\t/\n5\t^\n\n";
	cin >> op;

	cout << "������ ���� �����: ";
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

	cout << "���������: " << reuslt << endl;

}