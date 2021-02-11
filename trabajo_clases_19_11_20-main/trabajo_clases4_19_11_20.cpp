#include<iostream>
#include<cmath>

using namespace std;

	std:: int pow(int base,int expo);
	while(exp)
	{
		std::int result{1};
		if(exp & 1)
		{
			result*=base;
			exp>>=1;
			base=*=base;
			
		}
		return result;
		
	}
	
	
int main()
{
	
	cout<<powint(7,12);
	double x{std::pow(3.0,4.0)};
	return 0;
	
}

