import java.io.*;
import java.util.*;

public class BarChart{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int a[] = new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
    }
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    int x=max;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==max)
            {
                System.out.print("*\t");
                a[j]=a[j]-1;
            }
            else
            {
                 System.out.print("\t");
            }
             
        }
        max--;  
        System.out.println();
    }
 }

}
