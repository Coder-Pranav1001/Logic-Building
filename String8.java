/*
	Description :- Count Small Character using While loop 
	Author :- Pranav R Sonawane
*/
import java.util.*;

class String8
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String");
		String str = sobj.nextLine(); 
		
		char Arr[] = str.toCharArray();
		
		int Count = 0;
		int i = 0;
		while(i < Arr.length)
		{
			if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
			{
				Count++;
			}
			i++;
		}
		
		System.out.println("Small Character are : "+Count);
	}
}