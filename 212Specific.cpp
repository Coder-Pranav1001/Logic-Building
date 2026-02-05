/*
	Description :- Addition of Two Double Using Specific  
	Author :- Pranav R Sonawane
*/

#include<iostream>
using namespace std; 

double Addition(double i, double j)
{
	double Ans = 0.0;
	Ans = i + j;
	return Ans;
}

int main()
{
	double a = 10.1, b = 11.9, ret = 0;
	
	ret = Addition(a,b);
	
	cout<<"Addition is : "<<ret<<"\n";
	
	return 0;
}