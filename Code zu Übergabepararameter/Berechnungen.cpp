#include <iostream>
using namespace std;

int Addition(int a, int b)
{
	cout << "Bitte geben Sie den Wert ein:  ";
	cin >> a;
	cout << "Bitte geben Sie den Wert ein:  ";
	cin >> b;
	int sum = a + b;
	cout << "Summe aus Addition lautet: " << sum << endl;
	return 0;
}
int Subtraktion(int a, int b)
{
	cout << "Bitte geben Sie den Wert ein:  ";
	cin >> a;
	cout << "Bitte geben Sie den Wert ein:  ";
	cin >> b;
	int sum = a - b;
	cout << "Summe aus Subtraktion lautet: " << sum << endl;
	return 0;
}
int Multiplikation(int a, int b)
{
	cout << "Bitte geben Sie den Wert ein:  ";
	cin >> a;
	cout << "Bitte geben Sie den Wert ein:  ";
	cin >> b;
	int sum = a * b;
	cout << "Summe aus Multiplikation lautet: " << sum << endl;
	return 0;
}
int Division(int a, int b)
{
	cout << "Bitte geben Sie den Wert ein:  ";
	cin >> a;
	cout << "Bitte geben Sie den Wert ein:  ";
	cin >> b;
	int sum = a / b;
	cout << "Summe aus Division lautet: " << sum << endl;
	return 0;
}