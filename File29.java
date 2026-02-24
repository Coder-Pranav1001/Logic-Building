/*
	Description :- Accept String from user and Frequency of Demo word
	Author :- Pranav R Sonawane
*/
import java.io.*;
import java.util.*;

class File29
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String : ");
		String str = sobj.nextLine();
		
		String Arr[] = str.split(" ");
		
		int iCount = 0;
		for(int i = 0; i < Arr.length; i++)
		{
			if(Arr[i].equals("Demo"))
			{
				iCount++;
			}
		}
		System.out.println("Frequency of Demo word is : "+iCount);
	}	
}

   