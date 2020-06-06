#include<iostream>
#include<iomanip>
using namespace std;

void square(int series[9])
{
	cout<<"Second series:  "<<endl;
	for(int i=0 ; i<9 ; i++)
	{
		series[i]*=series[i];
		cout<<series[i]<<setw(4);
	}
	cout<<endl;
	for (int j=0 ; j<9 ; j++)
	{
		if(series[j]>1 && series[j]%2==0)
		{
			cout<<series[j]<<" is even."<<endl;
		}
		else if (series[j]>1 && series[j]!=0)
		{
			cout<<series[j]<<" is odd."<<endl;
		}
		else if (series[j]==1)
		{
			cout<<series[j]<<" is nor even nor odd."<<endl;
		}
	}
}
void cube(int series2[9])
{
		cout<<endl<<"Third series:  "<<endl;
		for(int i=0 ; i<9 ; i++)
	{
		series2[i]=series2[i]*(i+1);
		cout<<series2[i]<<setw(4);
	}
	cout<<endl;
	for (int j=0 ; j<9 ; j++)
	{
		int s=0;
		if (series2[j]>1)
		{
		    for (int i=1 ; i<=series2[j] ; i++)
		    {
			    if (series2[j]%i==0)
			    {
				   s++;
			    }
			    
		    }
		    if(s>2)
			    {
			    	cout<<series2[j]<<"  is not prime."<<endl;;
				}
				else if (s<=2)
				{
					cout<<series2[j]<<"  is prime."<<endl;
				}
	    }
		else if (series2[j]==1)
		{
			cout<<series2[j]<<" is not prime."<<endl;
		}
	}
}
int main()
{
	int a[9]={1,2,3,4,5,6,7,8,9};
	int x=0,y=0;
	for ( int x=0; x<9 ; x++)
	{
		cout<<a[x]<<setw(4);
	}
	cout<<endl<<endl;
	square(a);
	cube(a);
	char string[17]="Welcome to cslab";
	
	for (int i=0 ; i<17 ; i++)
	{
		if (string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
		{
			x++;
		}
		else{
			y++;
		}
	}
	cout<<"Number of vowels are :"<<x<<endl<<"Number of consonents are : "<<y<<endl;
	return 0;
}
