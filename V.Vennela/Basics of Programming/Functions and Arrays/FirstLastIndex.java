import java.io.*;
import java.util.*;

public class FirstLastIndex{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int a[] = new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
    }
    int d = sc.nextInt();
    int k=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==d)
        {
            k=i;
            count++;
        }
    }
    if(count!=0)
    {
        System.out.println(k-count+1);
    System.out.println(k);
    
    }
    else
    {
        System.out.println(-1);
    System.out.println(-1);
    }
    
 }

}
