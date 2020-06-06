#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	int a, b=1;
	float c;
	cout<<"Enter a number :   ";
	cin>>a;
	cout<<"Factors are :  ";
	for ( ; b<=a ; b++)
	{
		if (a%b==0)
		{
			cout<<setw(4)<<b<<setw(4);
		}
	}
	c=sqrt(a);
	cout<<endl;
	if(a==c*c)
	{
		cout<<a<<" is perfect square."<<endl;
		int sum=0,x=1;
		do
 {
 sum+=(a%2)*x;
 a=a/2;
 x=x*10;
 }
 while(a!=0);
 cout<<"\n "<<sum;
	}
	
	return 0;
}
