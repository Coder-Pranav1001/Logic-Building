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
		
		for(iCnt = 2; iCnt <= (iNo/2); iCnt+=2) // iCnt = iCnt + 2 // Time Complexity N/4
		{
			if((iNo % iCnt) == 0)
			{
				System.out.println("Even Factor is : "+iCnt);
			}
		}
	}
}

class Factor2
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