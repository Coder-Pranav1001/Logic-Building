/*
	Description :- Accept String and Count of Capital Character
	Author :- Pranav R Sonawane
*/
import java.util.*;

class MarvellousX
{
	public int CapCount(String s)
	{
		int iCnt = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if((s.charAt(i)>='A') && (s.charAt(i)<='Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class CapitalCount
{
	public static void main(String a[])
	{		
		Scanner sobj =  new Scanner(System.in);
		 
		System.out.println("Please enter string : ");
		String str = sobj.nextLine();
		
		MarvellousX mobj = new MarvellousX();
		int iRet = mobj.CapCount(str);
		System.out.println("Number of Capital Character Count is : "+iRet);
	}
}