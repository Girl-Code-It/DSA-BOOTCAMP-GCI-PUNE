import java.io.*;
import java.util.*;

public class SumOfArrays{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);
    int n1 = sc.nextInt();
    int a[] = new int[n1];
    for(int i=0;i<n1;i++)
    {
        a[i]=sc.nextInt();
    }
    int n2 = sc.nextInt();
    int b[] = new int[n2];
    for(int i=0;i<n2;i++)
    {
        b[i]=sc.nextInt();
    }
    if(n2>n1)
    {
        for(int i=0;i<n2-n1;i++)
        {
            System.out.println(b[i]);
        }
        for(int i=0;i<n1;i++)
        {
            System.out.println(a[i]+b[i+n2-n1]);
        }
    }
    else
    {
        for(int i=0;i<n1-n2;i++)
        {
            System.out.println(a[i]);
        }
        for(int i=0;i<n2;i++)
        {
            System.out.println(a[i+n1-n2]+b[i]);
        }   
    }
 }

}
