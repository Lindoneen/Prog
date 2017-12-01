//файл program.cpp 
#include "stdafx.h" 
#include <iostream> 


using namespace std;

int main() 
{ 
	int count; // переменная для выбора в switch 
	 double a, b; // переменные для хранения операндов 
	 cout << "Vvedite pervoe chislo: "; 
	 cin >> a; 
	 cout << "Vvedite vtoroe chislo: "; 
	 cin >> b;
     cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: "; 
	 cin >> count;
switch (count) // начало оператора switch 
	{ 
		case 1: // если count = 1 
			{ 
				
				double MySum(double a, double b) 
			 // выполнить сложение 
			break;
			} 
		case 2: // если count = 2 
			{ 
				double MyVich(double a, double b);
				 // выполнить вычитание 
				break; 
			} 
		case 3: // если count = 3 
			{ 
				 // выполнить умножение 
				break; 
			} 
		case 4: // если count = 4 
			{ 
				 // выполнить деление 
				break; 
			} 
			default: // если count равно любому другому значению 
				cout << "Nepravilni vvod" << endl; 
	}

system("pause");
return 0; 
}