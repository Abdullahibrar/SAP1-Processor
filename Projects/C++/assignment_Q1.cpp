#include<iostream>
#include<iomanip>
using namespace std;

void sum(int x[4][4], int y[4][4] )
{
	int z[4][4];
	for (int a=0 ; a<=3 ; a++)
	{
		for (int b=0; b<=3 ; b++)
		{
			z[a][b]=x[a][b] + y[a][b];
			cout<<setw(5)<<z[a][b]<<setw(5);
		}
		cout<<endl;
	}
}

void product(int i[4][4], int j[4][4])
{
    int k[4][4];

    for (int x = 0; x < 4; x++) 
	{
        for (int y = 0; y < 4; y++) 
		{
            k[x][y] = 0;
            for (int z = 0; z < 4; z++) 
			{
                k[x][y] += i[x][z] * j[z][y];
            }
        }
    }
     for (int a=0 ; a<=3 ; a++)
	{
		for (int b=0; b<=3 ; b++)
		{
			cout<<setw(5)<<k[a][b]<<setw(5);
		}
		cout<<endl;
	}
}
int main()
{
	int matrix[4][4],matrix1[4][4];
	
	for (int a=0 ; a<=3 ; a++)
	{
		for (int b=0; b<=3 ; b++)
		{
			cout<<"Enter "<<b+1<<" element of "<<a+1<<" row for ist matrix: ";
			cin>>matrix[a][b];
		}
		cout<<endl;
	}
	cout<<endl;
	for (int a=0 ; a<=3 ; a++)
	{
		for (int b=0; b<=3 ; b++)
		{
			cout<<"Enter "<<b+1<<" element of "<<a+1<<" row for 2nd matrix: ";
			cin>>matrix1[a][b];
		}
		cout<<endl;
	}
	cout<<"First matrix is: "<<endl;
	for (int a=0 ; a<=3 ; a++)
	{
		for (int b=0; b<=3 ; b++)
		{
			cout<<setw(5)<<matrix[a][b]<<setw(5);
		}
		cout<<endl;
	}
	cout<<"Second matrix is: "<<endl;
	for (int a=0 ; a<=3 ; a++)
	{
		for (int b=0; b<=3 ; b++)
		{
			cout<<setw(5)<<matrix1[a][b]<<setw(5);
		}
		cout<<endl;
	}
    cout<<"Addition of above two matrices are: "<<endl;
    sum(matrix,matrix1);
    cout<<"Product of above two matrices are: "<<endl;
	product(matrix,matrix1);
	
	return 0;
}
