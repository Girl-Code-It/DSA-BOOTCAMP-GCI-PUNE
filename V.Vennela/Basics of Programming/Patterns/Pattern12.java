import java.util.*;

public class Pattern12 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n = scn.nextInt();
        int x=0,y=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(i==1)
                {
                    System.out.print("0");
                }
                else if(i==2 && j==1)
                {
                    System.out.print("1\t");
                    x=x+y;
                }  
                else 
                {
                    System.out.print(x+"\t");
                    int temp=x;
                    x=x+y;
                    y=temp;
                }
                    
            }
            System.out.println();
        }

    }
}
