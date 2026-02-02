/*
	Description :- Accept string and calculate character
	Author :- Pranav R Sonawane
*/
import java.util.*;

class String2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Please enter your full name : ");
		String str = sobj.nextLine();
		
		System.out.println("Number of character are : "+str.length());
	}
}