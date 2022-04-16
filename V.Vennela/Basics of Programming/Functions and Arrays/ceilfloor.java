import java.io.*;
import java.util.*;

public class ceilfloor{

public static void main(String[] args) throws Exception 
{
    // write your code here
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int a[] = new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
    }
    int d = sc.nextInt();
    for(int i=0;i<n;i++)
    {
        if(d==a[i])
        {
            System.out.print(d);
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<d && a[i+1]>d)
        {
            System.out.println(a[i+1]);
            System.out.println(a[i]);
        }
            
    }
 }

}
