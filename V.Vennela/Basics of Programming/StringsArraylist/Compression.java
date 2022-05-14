import java.io.*;
import java.util.*;

public class Compression {

	public static String compression1(String str){
		// write your code here
		int n = str.length();
		int i=0;
		String s = new String();
		char x = str.charAt(0);
		for(i=1;i<n;i++)
		{
		    if(x==str.charAt(i))
		    {
		        continue;
		    }
		    else
		    {
		        s=s+x;
		        x=str.charAt(i);
		    }
		}
         s=s+x;
		return s;
	}

	public static String compression2(String str){
		// write your code here
		int n = str.length();
		int i=0;
		String s = new String();
		char x = str.charAt(0);
		int count=1;
		for(i=1;i<n;i++)
		{
		    if(x==str.charAt(i))
		    {
		        count++;
		        continue;
		    }
		    else
		    {
		        if(count!=1)
		        {
		            s=s+x+count+"";
		        }
		        else
		        {
		            s=s+x;
		        }
		        
		        x=str.charAt(i);
		        count=1;
		    }
		}
        if(count!=1)
		        {
		            s=s+x+count+"";
		        }
		        else
		        {
		            s=s+x;
		        }
		return s;

		
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		System.out.println(compression1(str));
		System.out.println(compression2(str));
	}

}
