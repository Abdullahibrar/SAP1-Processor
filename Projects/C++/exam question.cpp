#include<iostream>
using namespace std;

float sum(float x)
{
	float sum1=1,y;
	for(y ; y<=x ; y++)
	{
		sum1+=1/y;
	}
	return sum1;
}

int main()
{
	float z;
	cout<<"Enter a number ";
	cin>>z;
	cout<<"n-th harmonic mean is   "<<sum(z)<<endl;
	
	return 0;
}
