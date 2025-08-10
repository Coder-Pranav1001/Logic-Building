/*
	Description :- Accept the number from user and check whether it is divisible by 3 or 5
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdbool.h>

bool Division(int iNo)
{
	int iAns1 = 0;
	int iAns2 = 0;
	
	iAns1 = iNo % 3;
	iAns2 = iNo % 5;
	
	if((iAns1 == 0) && (iAns2 == 0))
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
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	bRet = Division(iValue);
	if(bRet == true)
	{
		printf("%d is Divisible by 3 and 5\n",iValue);
	}
	else
	{
		printf("%d is not Divisible by 3 and 5\n",iValue);
	}
	
	return 0;
}