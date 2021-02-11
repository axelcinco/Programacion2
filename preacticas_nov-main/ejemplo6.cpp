# include <iostream>
using namespace std;
int main()
{
	
	cout<<" ingresa un entero : ";
	
	int x{};
	cin>>x;
	if(x>0)
	{
		cout<<"el valor es positivo";
	}
	else if(x<0)
	{
		cout<<"el valor es negativo";
	}
	else
	{
		cout<<"el valor no es cero";
	}
	return 0;
}
