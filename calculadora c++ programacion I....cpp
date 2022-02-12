#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout<< "Calculadora" << "\n" ; 
	float n1,n2; 
	
	cout<< " Ingrese el primer numero" << "\n";
	cin>> n1; 
	
	cout<< "Ingrese el segundo numero "<< "\n"; 
	cin>> n2; 
	
	cout<< " Ingrese la operacion que desea realizar" << "\n"; 
	
	cout<< " 1: resta" << "\n"; 
	cout<< " 2: suma" << "\n"; 
	cout<< " 3: division" << "\n"; 
	cout<< "4: multiplicacion" << "\n";	
	int n3 ;
	cout<< "Resultado" << "\n"; 
	cin>> n3;
	switch(n3){ 
		case 1: cout << n1 << " - " << n2 << " = " << n1 - n2; break; 
		case 2: cout << n1 << " + " << n2 << " = " << n1 + n2; break;
		case 3: cout << n1 << " / " << n2 << " = " << n1 / n2; break;
		case 4: cout << n1 << " * " << n2 << " = " << n1 * n2; break;
	}
return 0;
}
