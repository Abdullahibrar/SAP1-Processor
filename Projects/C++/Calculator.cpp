#include<iostream>
using namespace std;
int main()
{
	float a,b,o,w,x,y,z;
	cout<<"Enter value of a\n";
	cin>>a;
	cout<<"Enter value of b\n";
	cin>>b;
	cout<<"operator\n1 fo addition\n2 for subtraction\n3 for division\n4 for multiplication\n";
	cin>>o;
	w=a+b;
	x=a-b;
	y=a/b;
	z=a*b;
	if (o==1)
	{cout<<"Sum is\n";
	cout<<w;
	}
	else if(o==2)
	{cout<<"Difference is\n";
	cout<<x;
	
	}
	else if(o==3)
	{
		cout<<"Division is\n";
		cout<<y;
		
	}
	else if(o==4)
	{
		cout<<"Multiplication is\n";
		cout<<z;
	}
	return 0;
}
