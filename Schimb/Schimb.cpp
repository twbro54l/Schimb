#include <iostream>

using namespace std;

int main()
{
	float a, b, aux;
	cout << "VAL A = ";
	cin >> a;
	if (!cin) {
		cout << "nu este valid" << endl;
		return -1;
	}
	cout << "VAL B = ";
	cin >> b;
	if (!cin) {
		cout << "nu este valid" << endl;
		return -1;
	}
	aux = a;
	a = b;
	b = aux;
	cout << "A = " << a << "; B = " << b << endl;
	return 0;
}

