/*
	Description :- replaceAll("\\s+"," ") 
	Author :- Pranav R Sonawane
*/
import java.util.*;

class String13
{
	public static void main(String a[]) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String");
		String str = sobj.nextLine(); 
		
		String data = str.replaceAll("\\s+"," "); // replace multiple white spaces by one white space
		
		String newstr = data.trim();
		
		String Arr[] = newstr.split(" ");
		
		System.out.println("Number of words are : "+Arr.length);
	}
}