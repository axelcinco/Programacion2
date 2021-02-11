#include <iostream>
using namespace std;

int readansewer()
{
	
	int num1=0,num2=0,tot=0;
	
	cout<<"ingrese un numero :"; cin>>num1;
	cout<<"ingrese otro numero : "; cin>>num2;
	
	tot=num1+num2;
	return tot;
	
	
	
	
}

void showansewer(int tot)
{
	cout<<"la suma de los dos numeros es: "<< tot;
}

int main ()
{
	
	int suma=readansewer();
	showansewer(suma);
	return 0;
	
}

