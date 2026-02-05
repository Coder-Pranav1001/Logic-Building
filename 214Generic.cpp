/*
	Description :- Addition Using Generic
	Author :- Pranav R Sonawane
*/

#include<iostream>
using namespace std; 

template <class T>
T Addition(T i, T j)
{
	T Ans;
	Ans = i + j;
	return Ans;
}

int main()
{
	double a = 10.1, b = 11.9, dret = 0.0;
	dret = Addition(a,b);
	cout<<"Addition is : "<<dret<<"\n";
	
	int x = 10, y = 11, iret = 0;
	iret = Addition(x,y);
	cout<<"Addition is : "<<iret<<"\n";
	
	return 0;
}