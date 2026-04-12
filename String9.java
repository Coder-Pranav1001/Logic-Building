/*
	Description :- Convert UpperCase to LowerCase
	Author :- Pranav R Sonawane
*/
import java.util.*;

class String9
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String");
		String str = sobj.nextLine(); 
		
		char Arr[] = str.toCharArray();
		
		for(int i = 0; i < Arr.length; i++)
		{
			if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
			{
				Arr[i] = (char)(Arr[i] + 32); // type cast
			}
		}
		
		String op = String.valueOf(Arr); // Convert Array into string
		//String op = Arr.toString();// GIVES HASHCODE
		System.out.println(op);
	
	}
}