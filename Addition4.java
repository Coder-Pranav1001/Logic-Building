/*
	Description :- Addition of 2 Integer
	Author :- Pranav R Sonawane
*/

import java.util.*;

class Arithematic
{
	public int Addition(int i, int j)
	{
		int Sum = 0;
		Sum = i + j;
		return Sum;
	}
}

class Addition4
{	
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iNo1 = 0, iNo2 = 0, iAns = 0;
		
		System.out.println("Enter the First Number");
		iNo1 = sobj.nextInt();
		
		System.out.println("Enter the Second Number");
		iNo2 = sobj.nextInt();
		
		Arithematic aobj = new Arithematic();
		iAns = aobj.Addition(iNo1,iNo2);
		
		System.out.println("Addition is : "+iAns);
	}
}