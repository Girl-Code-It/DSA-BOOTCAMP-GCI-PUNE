import java.util.*;

public class Pattern20 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n = scn.nextInt();
        int x = n/2+1;
        for(int i=1;i<=n;i++)
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
                if(a==1)
                     System.out.print("*\t");
                else if(i+a==n+1)
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
