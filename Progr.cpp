//���� program.cpp 
#include "stdafx.h" 
#include <iostream> 


using namespace std;

int main() 
{ 
switch (count) // ������ ��������� switch 
	{ 
		case 1: // ���� count = 1 
			{ 
			 // ��������� �������� 
			break;
			} 
		case 2: // ���� count = 2 
			{ 
				 // ��������� ��������� 
				break; 
			} 
		case 3: // ���� count = 3 
			{ 
				 // ��������� ��������� 
				break; 
			} 
		case 4: // ���� count = 4 
			{ 
				 // ��������� ������� 
				break; 
			} 
			default: // ���� count ����� ������ ������� �������� 
				cout << "Nepravilni vvod" << endl; 
	}

system("pause");
return 0; 
}