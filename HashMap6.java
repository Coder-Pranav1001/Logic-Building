/*
	Description :- Hash Map (Remove Duplicate Words)
	Author :- Pranav R Sonawane
*/
import java.util.*;

class HashMap6
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String : ");
		String str = sobj.nextLine();
		
		String Arr[] = str.split(" ");
		
		//		  key     value
		HashMap <String, Integer> hobj = new HashMap(); // object creation of HashMap
		int Frequency = 0;
		
		String output = "";
		
		for(String ch : Arr)
		{
			if(hobj.containsKey(ch))
			{
				Frequency = hobj.get(ch);
				hobj.put(ch,Frequency+1);
			}
			else 
			{
				hobj.put(ch,1);
				ch = ch + " ";
				output = output + ch;
			}
		}
		System.out.println(output);
	}
}