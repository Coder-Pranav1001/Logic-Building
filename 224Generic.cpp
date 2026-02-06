/*
	Description :- Find Maximum numbers Using Generic
	Author :- Pranav R Sonawane
*/

#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
	int iCnt = 0;
	T Max = Arr[0];
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] > Max)
		{
			Max = Arr[iCnt];
		}
	}
	return Max;
}

int main()
{
	int iData[] = {110,120,320,40};
	int iRet = 0;
	iRet = Maximum(iData,4);	
	cout<<"Maximum of Integer is : "<<iRet<<"\n";
	
	float fData[] = {90.2f,9.23f,89.90f,67.90f,23.78f};
	float fRet = 0.0;
	fRet = Maximum(fData,5);	
	cout<<"Maximum of Float is : "<<fRet<<"\n" ;
	
	return 0;
}