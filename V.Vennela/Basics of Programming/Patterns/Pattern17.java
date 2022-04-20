import java.util.*;

public class Pattern17 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n = scn.nextInt();
        int st=1,sp=n/2;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sp;j++)
            {
                System.out.print("\t");
            }
            for(int j=1;j<=st;j++)
            {
                if(st==n)
                    System.out.print("*\t");
                else if(j<=st/2)
                    System.out.print("\t");
                else
                    System.out.print("*\t");
            }
            if(i<=n/2)
            {
                sp--;
                st+=2;
            }
            else
            {
                sp++;
                st-=2;
            }
            System.out.println();
        }

    }
}
