import java.io.*;
import java.util.*;

public class FindElement{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int a[] = new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
    }
    int key = sc.nextInt();
    int flag=1;
    int i=0;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=0;
            break;
        }
           
    }
    if(flag==1)
        System.out.println("-1");
    else
        System.out.println(i);
 }

}
