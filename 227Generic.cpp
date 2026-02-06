/*
	Description :- Create Array and Display all Elements using Generic
	Author :- Pranav R Sonawane
*/

#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
	public:
		T *Arr;
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

template <class T>
ArrayX <T> :: ArrayX(int i)
{
	iSize = i;
	Arr = new T[iSize];
}

template <class T>	
void ArrayX <T> :: Accept()
{
	int iCnt = 0;
	cout<<"Enter the elements : "<<"\n";
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		cin>>Arr[iCnt];
	}
}
		
template <class T>		
void ArrayX <T> :: Display()
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
	ArrayX <int>obj1(5);
	obj1.Accept();
	obj1.Display();
	
	ArrayX <double>obj2(5);
	obj2.Accept();
	obj2.Display();
	
	return 0;
}