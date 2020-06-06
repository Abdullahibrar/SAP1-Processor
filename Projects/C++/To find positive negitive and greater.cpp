#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter value of a\n";
	cin>>a;
	cout<<"Enter value of b\n";
	cin>>b;
	cout<<"Enter value of c\n";
	cin>>c;
	cout<<"Enter value of d\n";
	cin>>d;


	if(a<0)
	{
		cout<<"a is negitve integer\n";
	}

	else
	{
		cout<<"a is positive intger\n";
	}
	if(b<0)
	{
		cout<<"b is negitive integer\n";
	}
	else
	{
		cout<<"b is positive integer\n";
	}
	if(c<0)
	{
		cout<<"c is negitive integer\n";
	}
	else
	{
		cout<<"c is positive integer\n";
	}
	if(d<0)
	{
		cout<<"d is negitive integer\n";
	}
	else
		{cout<<"d is positive integer\n";
	}


	if (a>b)
	{if(b>c && c>d)
		cout<<"\nGreater number is a\n";
	}
	else if(b>c)
	{if (c>a && a>d)
		cout<<"\nGreater number is b\n";
	}
	else if(c>d)
	{if (d>a && a>b)
		cout<<"\nGreater number is c\n";
	}
	else if(d>a)
	{if(a>b && b>c)
		cout<<"\nGreater number is d\n";
	}

	return 0;
}
