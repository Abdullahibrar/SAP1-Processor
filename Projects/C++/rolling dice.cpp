#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int dice(void);
int main()
{
	int result;
	result=dice();
	switch(result)
	{
		case(1):
			{
				cout<<"You win\n";
				break;
			}
		case(0):
			{
				cout<<"You lost\n";
				break;
			}
	}
	system("pause");
	return 0;
}
int dice(void)
{
	int num,n_6=0;
	srand(time(0));
	cout<<"The values of dice rolls are:\n";
	for(int rolls=0; rolls<10; rolls++)
	{
		num=rand()%6+1;
		cout<<num<<endl;
		if(num==6)
		{
			n_6++;
		}
	
	}
	
	if(n_6>=3)
	return 1;
	else

	return 0;
}

