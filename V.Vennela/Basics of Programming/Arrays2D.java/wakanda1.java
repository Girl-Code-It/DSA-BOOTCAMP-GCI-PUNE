import java.io.*;
import java.util.*;

public class wakanda1{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);
    int r = sc.nextInt();
    int c = sc.nextInt();
    int a[][] = new int[r][c];
    for(int i=0;i<r;i++)
    {
         for(int j=0;j<c;j++)
        {
            a[i][j]=sc.nextInt();
        }
    }
    for(int i=0;i<c;i++)
            {
                if(i%2==0)
                {
                    for(int j=0;j<r;j++)
                   {
                    System.out.println(a[j][i]);
                   }
                }
                else
                {
                    for(int j=r-1;j>=0;j--)
                    {
                    System.out.println(a[j][i]);
                    }
                }
                
            }
 }

}
