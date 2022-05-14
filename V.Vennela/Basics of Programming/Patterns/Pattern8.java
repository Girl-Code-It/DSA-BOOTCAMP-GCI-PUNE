import java.util.*;

public class Pattern8 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        
        int n = scn.nextInt();
        for(int i=n;i>0;i--)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==j)
                    System.out.print("*\t");
                else
                    System.out.print("\t");
            }
            System.out.println();
        }

    }
}
