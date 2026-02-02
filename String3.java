/*
	Description :- Display Character using charAt Method
	Author :- Pranav R Sonawane
*/
import java.util.*;

class String3
{
	public static void main(String a[])
	{
		
		Scanner sobj =  new Scanner(System.in);
		 
		System.out.println("Please enter string : ");
		String str = sobj.nextLine();
		 
		for(int i = 0; i < str.length(); i++)
		{
			System.out.println(str.charAt(i)); // charAt this mathod Display Data on index 
		}
	}
}