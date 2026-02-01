/*
	Description :- Addition of number of element  
	Author :- Pranav R Sonawane
*/
import java.util.*;

class Addition8
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array : ");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter the element of array");
		for(int iCnt = 0; iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
			
		int iSum = 0;
		for(int iCnt = 0; iCnt<Arr.length; iCnt++)
		{
			iSum = iSum+Arr[iCnt];
		}
		
		System.out.println("Addition is : "+iSum);
	}
}