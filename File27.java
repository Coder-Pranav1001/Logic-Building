/*
	Description :- Accept String from user and display length of each word
	Author :- Pranav R Sonawane
*/
import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class File27
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String : ");
		
		String str = sobj.nextLine();
		
		String Arr[] = str.split(" ");
		
		System.out.println("Number of words are : "+Arr.length);
		
		System.out.println("Words from the string are : ");
		for(int i = 0; i<Arr.length; i++)
		{
			System.out.println(Arr[i] + " Length : "+Arr[i].length());
		}
	}	
}

   