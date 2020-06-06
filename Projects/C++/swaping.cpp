#include<iostream>
using namespace std;
void swap(int&a, int&b);
int main()
{
	int num_1,num_2;
	cout<<"Enter two numbers\n";
	cin>>num_1>>num_2;
	swap(num_1,num_2);
	cout<<"first number= "<<num_1<<endl<<"second number= "<<num_2<<endl;
	
	return 0;
}
void swap(int&a, int&b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}

