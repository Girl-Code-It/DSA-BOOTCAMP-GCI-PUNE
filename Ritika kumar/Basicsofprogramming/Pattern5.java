import java.util.Scanner;

public class Pattern5 {

    public static void main(String[]args)
    {
        Scanner s=  new Scanner(System.in);
        int n = s. nextInt();

        int sp =n/2, st=1;

        for(int i =1; i<=n ;i++)
        {
            for(int j=1; j<=sp ;j++)
            {
               System.out.print(" ");
            }

            for(int k =1; k<=st ;k++)
            {
                System.out.print("*");
            }

            if(i<=n/2)
            {
                sp--;
                st+=2;
                System.out.println();
            }

            else{
                sp++;
                st-=2;
                System.out.println();
            }

            
        }
    }
    
}
