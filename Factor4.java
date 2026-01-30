/*
	Description :- Accept number and Display All Factors and Multiplication of all Factors
	Author :- Pranav R Sonawane
*/
import java.util.*;	

class Numbers
{
	public int FactorMultiplication(int iNo)
	{
		int iCnt = 0;
		int iMult = 1;
		
		for(iCnt = 1; iCnt <= (iNo/2); iCnt++) 
		{
			if((iNo % iCnt) == 0)
			{
				iMult = iMult * iCnt;
			}
		}
		return iMult;
	}
}

class Factor4
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number : ");
		int iNo = sobj.nextInt();
		
		Numbers nobj = new Numbers();
		
		int iRet = nobj.FactorMultiplication(iNo);
		
		System.out.println("Multiplication of Factors of "+ iNo +" is : "+iRet);
	}
}