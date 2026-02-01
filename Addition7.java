/*
	Description :- Addition of number of element  
	Author :- Pranav R Sonawane
*/

import java.lang.*;

class Addition7
{
	public static void main(String arg[])
	{
		int Arr[] = {10,20,30,40,50};
		int iSum = 0;
		
		for(int iCnt = 0; iCnt<Arr.length; iCnt++)
		{
			iSum = iSum+Arr[iCnt];
		}
		System.out.println("Addition is : "+iSum);
	}
}