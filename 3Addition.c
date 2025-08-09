/*
	Description :- Addition of two Numbers
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
	int Ans = 0;
	Ans = iNo1 + iNo2;
	
	return Ans;
}

int main()
{
	int i,j, Ans;
	
	i = 10;
	j = 11;
	
	Ans = i + j;
	
	printf("Addition is : %d\n",Ans);

	return 0;
}