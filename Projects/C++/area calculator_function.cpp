#include<iostream>
using namespace std;

int  getSquareSide(void)
{
	int side;
	cout<<"Enter length of side of square:"<<endl;
	cin>>side;
	return side;
}

void getRectangleSide(int &x, int &y)
{
	int a,length,width;
	cout<<"Enter length of rectangle:"<<endl;
	cin>>length;
	cout<<"Enter width of rectangle:"<<endl;
	cin>>width;
	x=length;
	y=width;
}

void getTrapezoidSides(float &a,float &b,float &c)
{
	float side1,side2,height;
	cout<<"Enter one of the parallel sides:\n";
	cin>>side1;
	cout<<"Enter the other parallel side:\n";
	cin>>side2;
	cout<<"Enter the height of trapezoid:\n";
	cin>>height;
	a=side1;
	b=side2;
	c=height;
}

int CalculateArea(int x)
{
	int area;
	area=x*x;
	return area;
}

float CalculateArea(int& y, int& z)
{
	float area;
	area=z*y;
	return area; 
}


float CalculateArea(float& a,float& b,float& h)
{
	float area,x;
	x=(a+b)/2;
	area=x*h;
	return area;
}


int main()
{
	cout<<"This programe will find the area of different shapes.\n"<<endl;
	char ask;
	do
	{
	    int oper,a,b;
		float x,y,z;
	    cout<<"Enter 1 for square.\nEnter 2 for rectangle.\nEnter 3 for trapezoid.\n";
	    cin>>oper;
	    switch(oper)
	    {
		    case 1:
		    	{
					int side=getSquareSide();
					cout<<"Area of square with length=   "<<side<<"\nis:   "
					<<CalculateArea(side)<<endl;
			        break;
				}
			    
		    case 2:
		    	{
		    		getRectangleSide(a,b);
					cout<<"Area of rectangle with length=  "<<a<<"  and width=  "<<b
					<<"\nis    "<<CalculateArea(a,b)<<endl;
			        break;
				}
			    
		    case 3:
		    	{
		    		getTrapezoidSides(x,y,z);
					cout<<"Area of trapezoid with one side=  "<<x<<"  second side=  "
					<<y<<"  and height=  "<<z<<"\nis   "<<CalculateArea(x,y,z)<<endl;
			        break;
				}
			    
		    default:
			    cout<<"Wrong operator!"<<endl;
			    break;
		}
		
		cout<<"\nDo you want to continue(y/n)"<<endl;
		cin>>ask;	
    }while(ask=='y');
	
	return 0;
}
