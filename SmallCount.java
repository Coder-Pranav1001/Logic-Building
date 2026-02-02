/*
	Description :- Accept String and Count of Small Character
	Author :- Pranav R Sonawane
*/
import java.util.*;

class MarvellousX
{
	public int SmCount(String s)
	{
		int iCnt = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if((s.charAt(i)>='a') && (s.charAt(i)<='z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class SmallCount
{
	public static void main(String a[])
	{		
		Scanner sobj =  new Scanner(System.in);
		 
		System.out.println("Please enter string : ");
		String str = sobj.nextLine();
		
		MarvellousX mobj = new MarvellousX();
		int iRet = mobj.SmCount(str);
		System.out.println("Number of Small Character Count is : "+iRet);
	}
}