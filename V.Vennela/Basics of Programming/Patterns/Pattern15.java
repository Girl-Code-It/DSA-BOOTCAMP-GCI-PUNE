import java.util.*;

public class Pattern15 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n = scn.nextInt();
        int sp=n/2,num=1,x=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sp;j++)
            {
                System.out.print("\t");
            }
            int x1=x;
            for(int j=1;j<=num;j++)
            {
                System.out.print(x1+"\t");
                if(j<=num/2)
                {
                    x1++;
                }
                else
                {
                    x1--;
                }
            }
            if(i<=n/2)
            {
                sp--;
                num+=2;
                x++;
            }
            else
            {
                sp++;
                num-=2;
                x--;
            }
            System.out.println();
        }

    }
}
