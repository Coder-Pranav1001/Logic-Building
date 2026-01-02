/*
	Description :- Templete For Problems on Numbers
	Author :- Pranav R Sonawane
*/

#include<iostream>
using namespace std;

// Problems on Numbers

class Numbers
{
	public:
		int iNo;
			
		Numbers(int i)
		{
			iNo = i;
		}
		
		void Function() // Here you want to place the function with business logic
		{
			// Logic
		}
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter Number : \n";
	cin>>iValue;
	
	Numbers obj(iValue);
	
	obj.Function();
	return 0;
}