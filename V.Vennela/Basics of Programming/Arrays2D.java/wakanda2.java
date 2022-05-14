import java.io.*;
import java.util.*;

public class wakanda2{

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
    for(int i=n-1;i>=0;i--)
    {
        int j=0,k=n-i-1;
        while(k<n && j<=i)
        {
            System.out.println(a[j][k]);
            j++;
            k++;
        }
    }
    }

}
