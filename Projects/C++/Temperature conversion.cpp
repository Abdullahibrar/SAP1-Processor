#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d,e,farenhite;
	cout<<"temperature in centigrade=";
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	farenhite=((b+c)*(a+e))/d;
	cout<<"temperature in farenhite=";
	cout<<farenhite;
	return 0;
}
