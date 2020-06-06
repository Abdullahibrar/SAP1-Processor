#include<iostream>
using namespace std;

int maximum(int salary[10] )
{
	int max;
	max=salary[0];
	if (salary[1]>max)
	{
		max=salary[1];
	}
	if (salary[2]>max)
	{
		max=salary[2];
	}
	if (salary[3]>max)
	{
		max=salary[3];
	}
	if (salary[4]>max)
	{
		max=salary[4];
	}
	if (salary[5]>max)
	{
		max=salary[5];
	}
	if (salary[6]>max)
	{
		max=salary[6];
	}
	if (salary[7]>max)
	{
		max=salary[7];
	}
	if (salary[8]>max)
	{
		max=salary[8];
	}
	if (salary[9]>max)
	{
		max=salary[9];
	}
	return max;
}

int minimum(int salary[10] )
{
	int min;
	min=salary[0];
	if (salary[1]<min)
	{
		min=salary[1];
	}
	if (salary[2]<min)
	{
		min=salary[2];
	}
	if (salary[3]<min)
	{
		min=salary[3];
	}
	if (salary[4]<min)
	{
		min=salary[4];
	}
	if (salary[5]<min)
	{
		min=salary[5];
	}
	if (salary[6]<min)
	{
		min=salary[6];
	}
	if (salary[7]<min)
	{
		min=salary[7];
	}
	if (salary[8]<min)
	{
		min=salary[8];
	}
	if (salary[9]<min)
	{
		min=salary[9];
	}
	return min;
}

int average(int salary[10])
{
	int sum=0,ave;
	for(int i=0 ; i<10 ; i++)
	{
		sum+=salary[i];
	}
	ave=sum/10;
	cout<<"Sum of all salaries is:  "<<sum<<endl;
	sum=0;
	return ave;
}

int main()
{
	char y;
	do 
	{
		int salary[10];
	for (int j=0; j<10 ; j++ )
	{
		cout<<"Enter "<<j+1<<"  salary:   ";
		cin>>salary[j];
	}
	cout<<"Maximum salary is:  "<<maximum(salary)<<endl;
	cout<<"Minimum salary is:  "<<minimum(salary)<<endl;
	cout<<"Average salary is:  "<<average(salary)<<endl;

	cout<<"Do you want to continue(y/n)"<<endl;
	cin>>y;
	}while(y=='y');
	return 0;
}
