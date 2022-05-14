import java.io.*;
import java.util.*;

public class Search {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int a[][] = new int[n][n];
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
        {
            a[i][j]=sc.nextInt();
        }
    }
    int x = sc.nextInt();
    int flag=1;
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
        {
            if(x==a[i][j])
            {
                System.out.println(i);
                System.out.println(j);
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        System.out.println("Not Found");
    }

}
