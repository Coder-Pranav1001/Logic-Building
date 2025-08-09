/*
	Description :- Accept the number from user and check whether it is divisible by 5 or not
	Author :- Pranav R Sonawane
*/

#include<stdio.h>
#include<stdbool.h>

bool Division(int iNo)
{
	int iAns = 0;
	iAns = iNo % 5;
	
	if(iAns == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
  
int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	bRet = Division(iValue);
	if(bRet == true)
	{
		printf("%d is divisible by 5\n",iValue);
	}
	else
	{
		printf("%d is not divisible by 5\n",iValue);
	}
	return 0;
}