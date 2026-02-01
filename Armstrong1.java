/*
	Description :- Accept Number and Check the number is Armstrong or not in Single Function
	Author :- Pranav R Sonawane
*/
import java.util.*;

class Digits
{
	public boolean CheckArmstrong(int iNo)
	{
		int iDigitCount = 0;
		int iTemp = iNo;
		int iDigit = 0, iPower = 1, iSum = 0;
		
		while(iTemp != 0) // Logic to calculate number of Digits
		{
			iDigitCount++;
			iTemp = iTemp / 10; 
		}
		
		iTemp = iNo;
		
		while(iTemp != 0)
		{
			iDigit = iTemp % 10;
			
			for(int iCnt = 1; iCnt <= iDigitCount; iCnt++) // Logic to Calculate the Power
			{
				iPower = iPower * i Digit;
			}
			iSum = iSum + iPower;
			iPower = 1;
			
			iTemp = iTemp / 10;
		}
		
		if(iSum == iNo)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class Armstrong1
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