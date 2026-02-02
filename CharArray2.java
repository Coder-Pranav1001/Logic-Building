/*
	Description :- Accept String and Count of Capital Character using toCharArray()
	Author :- Pranav R Sonawane
*/
import java.util.*;

class MarvellousX
{
	public int CapCount(String s)
	{
		int iCnt = 0;
		char Arr[] = s.toCharArray();

		for(int i = 0; i < Arr.length; i++)
		{
			if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class CharArray2
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