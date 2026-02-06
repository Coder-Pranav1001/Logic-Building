/*
	Description :- Create Array and Display all Elements using Specific
	Author :- Pranav R Sonawane
*/

#include<iostream>
using namespace std;

class ArrayX
{
	public:
		int *Arr;
		int iSize;
		
		ArrayX(int i);
		void Accept();
		void Display();
};

/*
	ReturnValue ClassName :: FuctionName()
	{
		
	}
*/

ArrayX :: ArrayX(int i)
{
	iSize = i;
	Arr = new int(iSize);
}
	
void ArrayX :: Accept()
{
	int iCnt = 0;
	cout<<"Enter the elements : "<<"\n";
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		cin>>Arr[iCnt];
	}
}
		
void ArrayX :: Display()
{
	int iCnt = 0;
	cout<<"Elements of array are : "<<"\n";
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		cout<<Arr[iCnt]<<"\n";
	}
}
	
int main()
{
	ArrayX obj(5);
	
	obj.Accept();
	obj.Display();
	
	return 0;
}