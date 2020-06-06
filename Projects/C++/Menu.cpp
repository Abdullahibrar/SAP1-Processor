#include <iostream>
using namespace std;
 
int main()
{
char selection;
char ch='y';
int a,b,c,d,e;
 
cout<<"\n Menu";
cout<<"\n========";
cout<<"\n A - To Calculate average";
cout<<"\n M - To calculate Median";
cout<<"\n B - To calculate Binary";
cout<<"\n O - To Find odd/even";

// read the input

while(ch=='y')
{
cout<<"\n Enter selection: ";
cin>>selection;
 
switch(selection)
{
case 'A' :
case 'a' :{cout<<"\n To Calculate average\n";
cout<<"enter 5 numbers\n";
//int a,b,c ,d,e;
float avg;
cin>>a>>b>>c>>d>>e;
avg=(a+b+c+d+e)/5;
cout<<"the average is  \t"<<avg;
}
break;
case 'M' :
case 'm' :{cout<<"\n To find median of 5 numbers\n";
cout<<"enter  5 numbers\n";
int median;
//int a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
median=(a+b+c+d+e)/2 +1;
cout<<"the median is  \t"<<c;
}
break;
case 'B' :
case 'b' :
{
cout<<"\n To calculate Binary";
cout<<"enter the number \n";
int remain;
int sum=0,a=1;
int x;
cin>>x;
do
 {
 sum+=(x%2)*a;
 x=x/2;
 a=a*10;
 }
 while(x!=0);
 cout<<"the binary of numberis \t"<<sum;
}
break;
case 'O' :
case 'o' :
{
cout<<"\n To Find odd/even";
int x;
cout<<"enter the number \n";
cin>>x;
if(x%2==0)
cout<<"the number \t "<<x<<"is even";
else
cout<<"the number \t"<<x <<"is odd";
}
break;
default : cout<<"\n Invalid selection";
}
cout<<"\n";
cout<<"Do you want to perform another ? press y if yes \n";
cin>>ch;
}
 return 0;
}

