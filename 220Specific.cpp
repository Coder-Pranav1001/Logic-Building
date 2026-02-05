/*
	Description :- Array Display Using Specific
	Author :- Pranav R Sonawane
*/

#include<iostream>
using namespace std;

Display(int Arr[], int iSize)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		cout<<Arr[iCnt]<<"\n";
	}
}

int main()
{	
	int Data[] = {10,20,30,40};
	
	Display(Data,4);
	
	return 0;
}