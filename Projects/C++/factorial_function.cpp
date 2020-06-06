#include<iostream>
using namespace std;

float factorial(float);

int main()
{
	float num;
	cout<<"Enter a number to find its factorial:  "<<endl;
	cin>>num;
	cout<<"Factorial is:  "<<factorial(num)<<endl;
	
}

float factorial(float x)
{
	float fac=1;
	while(x>0)
	{
		fac=fac*x;
		x--;
	}
	return fac;
}
