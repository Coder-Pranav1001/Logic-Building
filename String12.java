/*
	Description :- trim()
	Author :- Pranav R Sonawane
*/
import java.util.*;

class String12
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String");
		String str = sobj.nextLine(); 
		
		String newstr = str.trim(); // trim() will remove white spaces before and after the string
		
		String Arr[] = newstr.split(" ");
		
		System.out.println("Number of words are : "+Arr.length);
	}
}