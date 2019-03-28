import java.util.*;
import java.lang.*;
import java.io.*;
 

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{

	Scanner sc=new Scanner(System.in);
		int n=sc.nextInt(),k=0;
		for(int i=n-1;i>=0;i--)
		{
			k=k+i;
		}
		System.out.print(k);
 

	}
}
