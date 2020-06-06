#include<iostream>
using namespace std;

float area_traingle(float,float);
float area_rectangle(float,float);

int main()
{
	int choice,b,h,l,w;
	cout<<"Enter 1 to calculate area of traingle and 2 to calculate area of rectangle."<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
		{
			cout<<"Enter base:"<<endl;
			cin>>b;
			cout<<"Enter height:"<<endl;
			cin>>h;
			cout<<"Area is:  "<<area_traingle(b,h)<<endl;
			break;
		}
	case 2:
		{
			cout<<"Enter length:"<<endl;
			cin>>l;
			cout<<"Enter width:"<<endl;
			cin>>w;
			cout<<"Area is:  "<<area_rectangle(l,w)<<endl;
			break;
		}
	default:
		cout<<"Wrong entry.Programe executed.";
		break;
    }
    return 0;
}

float area_traingle(float x,float y)
{
	int area;
	area=(x*y)/2;
	return area;
}

float area_rectangle(float a1,float a2)
{
	int area_r;
	area_r=a1*a2;
	return area_r;
}
