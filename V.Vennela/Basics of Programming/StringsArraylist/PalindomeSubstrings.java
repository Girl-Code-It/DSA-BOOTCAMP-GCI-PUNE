import java.lang.*;
import java.io.*;
import java.util.*;

public class PalindomeSubstrings{
    public static boolean palindrome(String str)
    {
       int i = 0, j = str.length() - 1;
    while (i < j) {
      if (str.charAt(i) != str.charAt(j)) {
        return false;
      }
      i++;
      j--;
    }
    return true;
    }

	public static void solution(String str){
		//write your code here
		for(int i=0;i<str.length();i++)
		{
		    for(int j=i;j<str.length();j++)
		    {
		        String sub=str.substring(i,j+1);
		        if(palindrome(sub))
	        	{
		            System.out.println(sub);
		        }
		    }
		}
		
		
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		solution(str);
	}

}
