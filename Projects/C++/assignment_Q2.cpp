#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int array[10];
	for (int j=0; j<=9; j++)
	{
		cout<<"Please enter a number:  ";
		cin>>array[j];
	}
	
	int array2[10];
	array2[0]=array[9];
	array2[1]=array[8];
	array2[2]=array[7];
	array2[3]=array[6];
	array2[4]=array[5];
	array2[5]=array[4];
	array2[6]=array[3];
	array2[7]=array[2];
	array2[8]=array[1];
	array2[9]=array[0];
	
	cout<<endl<<"The numbers you entered in the reverse order are:  \n";
	for (int k=0; k<=9 ; k++)
	{
		cout<<array2[k]<<setw(3);
	}
	cout<<endl;
	
	return 0;
}
