#include<iostream>
#include<fstream>
int main()
{
	std::ofstream outf("sample.dat");
	if(!outf)
	{
		std::cerr<<"ohh no se puede estar en modo abierto "<<'\n';
		
	}
	outf<<"axel  "<<'\n';
	outf<<"garcia"<<'\n';
}
