/*
	Description :- Accept number and Display Even Factor
	Author :- Pranav R Sonawane
*/
import java.util.*;	

class Numbers
{
	public void EvenFactorDisplay(int iNo)
	{
		int iCnt = 0;
		
		for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
		{
			if((iNo % iCnt) == 0)
			{
				if((iCnt % 2) == 0)
				{
					System.out.println("Even Factor is : "+iCnt);
				}
			}
		}
	}
}

class Factor
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number : ");
		int iNo = sobj.nextInt();
		
		Numbers nobj = new Numbers();
		
		nobj.EvenFactorDisplay(iNo);
	}
}