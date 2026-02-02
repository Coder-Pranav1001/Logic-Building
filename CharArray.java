/*
	Description :- Accept String and Convert into Array using toCharArray()
	Author :- Pranav R Sonawane
*/
import java.util.*;

class CharArray
{
	public static void main(String a[])
	{		
		Scanner sobj =  new Scanner(System.in);
		 
		System.out.println("Please enter string : ");
		String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray(); // this method convert String to Array
		
		System.out.println(Arr);
	}
}