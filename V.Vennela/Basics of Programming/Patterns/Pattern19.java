import java.util.*;

public class Pattern19{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

     // write ur code here
     int n = scn.nextInt();
     int x = n/2+1;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=n;j++)
         {
             if(i==x || j==x)
             {
                System.out.print("*\t");
             }
             else if(i==1 && j>=1 && j<x)
             {
                System.out.print("*\t");
             }
             else if(j==1 && i>x && i<=n)
             {
                System.out.print("*\t");
             }
             else if(i==n && j>x && j<=n)
             {
                System.out.print("*\t");
             }
             else if(j==n && i>=1 && i<x)
             {
                System.out.print("*\t");
             }
             else
             {
                System.out.print("\t");
             }
         }
         System.out.println();
     }

 }
}
