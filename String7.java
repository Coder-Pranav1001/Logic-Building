/*
	Description :- Count Small Character using For each 
	Author :- Pranav R Sonawane
*/
import java.util.*;

class String7
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String");
		String str = sobj.nextLine(); 
		
		char Arr[] = str.toCharArray();
		
		int Count = 0;
		
		for(char Ch : Arr)
		{
			if((Ch >= 'a') && (Ch <= 'z'))
			{
				Count++;
			}
		}
		System.out.println("Small Character are : "+Count);
	}
}