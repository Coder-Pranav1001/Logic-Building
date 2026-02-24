/*
	Description :- Accept String from user and Display such a word from string whos length is largest
	Author :- Pranav R Sonawane
*/
import java.io.*;
import java.util.*;

class File28
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String : ");
		String str = sobj.nextLine();
		
		String Arr[] = str.split(" ");
		
		System.out.println("Number of words are : "+Arr.length);
		
		int iMax = 0;
		int MaxIndex = 0;
		
		for(int i = 0; i < Arr.length; i++)
		{
			if(iMax < Arr[i].length())
			{
				iMax = Arr[i].length();
				MaxIndex = i;
			}
		}
		System.out.println("Largest word from the string is : "+ Arr[MaxIndex] +" with the length "+iMax);
	}	
}

   