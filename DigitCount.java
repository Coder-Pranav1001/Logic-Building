/*
	Description :- Accept String and Count Digit
	Author :- Pranav R Sonawane
*/
import java.util.*;

class MarvellousX
{
	public int CountDigit(String s)
	{
		int iCnt = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if((s.charAt(i)>='0') && (s.charAt(i)<='9'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class DigitCount
{
	public static void main(String a[])
	{		
		Scanner sobj =  new Scanner(System.in);
		 
		System.out.println("Please enter string : ");
		String str = sobj.nextLine();
		
		MarvellousX mobj = new MarvellousX();
		int iRet = mobj.CountDigit(str);
		System.out.println("Number of Count Digit is : "+iRet);
	}
}