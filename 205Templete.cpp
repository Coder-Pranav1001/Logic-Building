/*
	Description :- Templete (Problems on Digits)
	Author :- Pranav R Sonawane
*/
#include<iostream>
using namespace std;

class DigitX
{
	public:
		int iNo;
		
		DigitX()
		{
			iNo = 0;
		}
		DigitX(int i)
		{
			iNo = i;
		}
};

int main()
{
	int iValue = 0;
	
	cout<<"Please enter the Number : "<<"\n";
	cin>>iValue;
	
	DigitX obj(iValue);
	
	cout<<obj.iNo<<"\n";
	
	return 0;
}
