/*
	Description :- Pattern (Accept Input From User and Display Pattern)
	Author :- Pranav R Sonawane
*/
/*
	Input : MARVELLOUS
	
	Pattern :
	
	M	A	R	V	E	L	L	O	U	S
	M	A	R	V	E	L	L	O	U	S
	M	A	R	V	E	L	L	O	U	S
	M	A	R	V	E	L	L	O	U	S
	M	A	R	V	E	L	L	O	U	S
	M	A	R	V	E	L	L	O	U	S
	M	A	R	V	E	L	L	O	U	S
	M	A	R	V	E	L	L	O	U	S
	M	A	R	V	E	L	L	O	U	S
	M	A	R	V	E	L	L	O	U	S
*/

import java.util.*;

class Pattern
{
	public void Display(String str)
	{
		int i = 0, j = 0;
		
		for(i = 0; i < str.length(); i++)
		{
			for(j = 0; j < str.length(); j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			System.out.println();
		}
	}
}
 
class Pattern9
{
	public static void main(String a[])
	{
		Pattern pobj = new Pattern();
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String s = sobj.nextLine(); 
		
		pobj.Display(s);
	}
}