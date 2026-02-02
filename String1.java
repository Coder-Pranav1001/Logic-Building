/*
	Description :- Accept and Display String
	Author :- Pranav R Sonawane
*/
import java.util.*;

class String1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Please enter your full name : ");
		String str = sobj.nextLine();
		
		System.out.println("Welcome "+str);
	}
}