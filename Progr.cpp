//файл program.cpp 
#include "stdafx.h" 
#include <iostream> 


using namespace std;

int main() 
{ 
switch (count) // начало оператора switch 
	{ 
		case 1: // если count = 1 
			{ 
			 // выполнить сложение 
			break;
			} 
		case 2: // если count = 2 
			{ 
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