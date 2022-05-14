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
    int sum[] = new int[n1>n2 ? n1:n2];
    int i=n1-1;
    int j=n2-1;
    int k = sum.length-1;
    int c=0;
    while(k>=0)
    {
        int d=c;
        if(i>=0)
        {
            d+=a[i];
        }
        if(j>=0)
        {
            d+=b[j];
        }
        c=d/10;
        d=d%10;
        sum[k]=d;
        i--;
        j--;
        k--;
    }
    if(c!=0)
    {
        System.out.println(c);
    }
    for(int x=0;x<sum.length;x++)
    {
        System.out.println(sum[x]);
    }
 }

}
