import java.util.*;

public class Pattern18{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

     // write ur code here
    int n = scn.nextInt();
    int x = n/2+1;
    int y = n-x;
    for(int i=1;i<=y;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int a=0;
            if(j>x)
            {
                a=n%j+1;
            }
            else
            {
                a=j;
            }
            if(i==1)
            {
                System.out.print("*\t");
            }
            else if(i==a)
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
     for(int i=x;i>0;i--)
    {
        for(int j=1;j<=n;j++)
        {
            int a=0;
            if(j>x)
            {
                a=n%j+1;
            }
            else
            {
                a=j;
            }
            if(a>=i)
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
