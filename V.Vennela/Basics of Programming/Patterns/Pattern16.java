import java.util.*;

public class Pattern16{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

     // write ur code here
     int n = scn.nextInt();
     int x=0;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=2*n-1;j++)
         {
             if(j>n)
            {
                x=(2*n)%j;
            }
            else
            {
                x=j;
            }
             if(x>i)
                System.out.print("\t");
             else
                System.out.print(x+"\t");
         }
         System.out.println();
     }

 }
}
