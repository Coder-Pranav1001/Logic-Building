/*
	Description :- Hash Map (frequency occurs of Word)
	Author :- Pranav R Sonawane
*/
import java.util.*;

class HashMap5
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
			}
		}
		 
		Set <String> setobj = hobj.keySet();

		int iMax = 0;
		String sMax = " ";
		
		for(String value : setobj)
		{
			if(iMax < hobj.get(value))
			{
				iMax = hobj.get(value);
				sMax = value;
			}
		}
		System.out.println("Maximum times occured word is : "+sMax+" with frequency "+iMax);
	}
}