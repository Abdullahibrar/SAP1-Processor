#include<iostream>
using namespace std;

void prime(int);

int main()
{
	int x;
	cout<<"Enter a number to check whether it is prime or not."<<endl;
	cin>>x;
	prime(x);
	return 0;
}

void prime(int y)
{
	int a=0,b=y;
	while(b>=1)
	{
		if (y%b==0)
		{
			a=a+1;
		}
		b--;
	}
	if (a==2)
	cout<<"Prime."<<endl;
	else
	cout<<"Not prime."<<endl;
}
