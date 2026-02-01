/*
	Description :- Accept Number and Check the number is Armstrong or not with multiple Function
	Author :- Pranav R Sonawane
*/
import java.util.*;

class Digits
{
	private int CountDigit(int iNo)
	{
		int iCnt = 0;
		while(iNo != 0)
		{
			iCnt++;
			iNo = iNo / 10;
		}
		return iCnt;
	}
	
	private int Power(int Base, int index)
	{
		int iAns = 1;
		
		for(int iCnt = 1; iCnt <= index; iCnt++)
		{
			iAns = iAns * Base;
		}
		return iAns;
	}	
	
	public boolean CheckArmstrong(int iNo)
	{
		int iTemp = iNo;
		int iSum = 0;
		int iDigit = 0;
		int iRet = 0;
		
		int iCount = CountDigit(iNo);
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			
			iRet = Power(iDigit, iCount);
			iSum = iSum + iRet;
			
			iNo = iNo / 10;
		}
		
		if(iSum == iTemp)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class Armstrong
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number : ");
		int iNo = sobj.nextInt();
		
		Digits dobj = new Digits();
		
		boolean bRet = dobj.CheckArmstrong(iNo);
		if(bRet == true)
		{
			System.out.println(iNo+" is a Armstrong Number.");
		}
		else
		{
			System.out.println(iNo+" is not a Armstrong Number.");
		}
	}
}