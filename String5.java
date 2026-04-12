/*
	Description :- Convert String into Character Array 
	Author :- Pranav R Sonawane
*/
import java.util.*;

class String5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String");
		String str = sobj.nextLine(); 
		
		char Arr[] = str.toCharArray();
		
		System.out.println(str.length());
		System.out.println(Arr.length);
	}
}