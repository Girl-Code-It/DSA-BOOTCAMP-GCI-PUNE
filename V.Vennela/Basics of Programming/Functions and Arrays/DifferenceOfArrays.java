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
    int diff[] = new int[n2];
    int i=n1-1;
    int j=n2-1;
    int k = diff.length-1;
    int c=0;
    while(k>=0)
    {
        int d=0;
        int alv=i>=0?a[i]:0;
        if(b[j]+c>=alv)
        {
            d=b[j]+c-alv;
            c=0;
        }
        else
        {
            d=b[j]+c+10-alv;
            c=-1;
        }
        
        diff[k]=d;
        i--;
        j--;
        k--;
    }
    int x=0;
    while(x<diff.length)
    {
        if(diff[x]==0)
            x++;
        else
            break;
    }
    while(x<diff.length)
    {
        System.out.println(diff[x]);
        x++;
    }
 }

}
