#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	
	bitset<8> bin=0b11000101;
	bitset<8> bin2=0xC5;
	cout<<bin<<endl;
	cout<<bin2<<endl;
	cout<<bitset<4>{001010}<<endl;
	return 0;
	
}
