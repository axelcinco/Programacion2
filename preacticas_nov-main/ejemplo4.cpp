#include <iostream>
using namespace std;
bool isequal(int x, int y){
return(x==y);
}
int main()
{
	
	cout<<"ingrese un entero ";
	int x{};
	cin>>x;
	cout<<"ingrese un entero ";
	int y{};
	cin>>y;
	cout<<std::boolalpha;
	cout<<x<<"y"<<y<<" son iguales ? ";
	cout<<isequal(x,y);
	return 0;
}
