import java.io.*;
import java.util.*;

public class Main{

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
        int i=n1-1,j=n2-1;
        while(i>=0 && j>=n2-n1)
        {
            b[j]=a[i]+b[j];
            i--;
            j--;
        }
        for(int k=0;k<n2;k++)
        {
            System.out.println(b[k]);
        }
    }
    else
    {
        int i=n1-1,j=n2-1;
        while(i>=n1-n2 && j>=0)
        {
            a[i]=a[i]+b[j];
            i--;
            j--;
        }
        for(int k=0;k<n1;k++)
        {
            System.out.println(a[k]);
        }
    }
 }

}
