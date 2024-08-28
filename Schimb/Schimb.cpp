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

/*
*	_____________________________________
	|Linia|a|b|aux|		Explicatie		|
	+-----+-+-+---+----------------------
	|1	  |3|7| ? |Se citesc de la tasta|
	|	  |	  |   |tura valorile 3 si 7 |
	|	  |	  |   |si se atribuie in ord|
	|	  |	  |   |ine variabilelor a si|
	|	  |	  |   |b. Variabila aux are |
	|	  |	  |   |deocamndata o valoare|
	|_____|___+___|necunoscuta			|
	|2	  |3|7|3  |Se copiaza valoarea v|
	|	  |	| |	  |ariabilei a in variab|
	|     |_+_+___|ila aux				|
	|3	  |..............ETC............|
*/