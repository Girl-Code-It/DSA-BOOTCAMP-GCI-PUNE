import java.io.*;
import java.util.*;

public class Subsets{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int a[] = new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
    }
    
    int subsets= (int)Math.pow(2,a.length);
    for(int i=0;i<subsets;i++)
    {
        String str="";
        int temp=i;
        for(int j=a.length-1;j>=0;j--)
        {
            int rem = temp%2;
            temp=temp/2;
            if(rem==0)
            {
               str="-\t"+str;
            }
            else
            {
                str=a[j]+"\t"+str;
            }
        }
        System.out.println(str);
    }
    
 }

}
