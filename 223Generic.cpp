/*
	Description :- Addition of all numbers Using Generic
	Author :- Pranav R Sonawane
*/

#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[], int iSize)
{
	int iCnt = 0;
	T Sum = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		Sum = Sum + Arr[iCnt];
	}
	return Sum;
}

int main()
{
	int iData[] = {10,20,30,40};
	int iRet = 0;
	iRet = Addition(iData,4);	
	cout<<"Addition Integer is : "<<iRet<<"\n";
	
	float fData[] = {90.2f,9.23f,89.90f,67.90f,23.78f};
	float fRet = 0.0;
	fRet = Addition(fData,5);	
	cout<<"Addition Float is : "<<fRet<<"\n" ;
	
	return 0;
}