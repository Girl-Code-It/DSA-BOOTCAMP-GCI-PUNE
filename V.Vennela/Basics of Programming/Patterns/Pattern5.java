import java.util.*;

public class Pattern5 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n = scn.nextInt();
        int k=(n/2)+1;
        int x;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i>k)
                    x=(n%i)+1;
                else
                    x=i;
                 if(j>k-x&&j<k+x)
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

