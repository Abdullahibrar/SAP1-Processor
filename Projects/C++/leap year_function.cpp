#include<iostream> 
using namespace std;
 
int isLeap(int n) 
{
   int b; 
   if (n%4==0) 
      { b=1; } 
   else if (n%100==0) 
   {    
       if (n%400==0) 
	      { b=1; } 
	   else 
	   { b=0; } 
   }  
    else { b=0; } 
     return b; 
} 

int main () 
{   
     int n; 
     cout << "Please enter a year: " << '\n'; 
     cin >> n; 
     isLeap(n);
     if(isLeap(n)==1) 
     {
     	cout<<n<<"  is leap year.";
	 }
	

     else
     {
     	cout<<n<<"  is not leap year.";
     }
     return 0;
}

