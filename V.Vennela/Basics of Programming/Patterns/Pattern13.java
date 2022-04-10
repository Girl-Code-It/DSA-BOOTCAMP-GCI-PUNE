import java.util.*;
public class Pattern13{
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);

        //write your code here
        int n = scn.nextInt();
        for(int i=1;i<=n;i++)
        {
            int c = 1;
            for(int j=1;j<=i;j++)
            {
                 System.out.print(c+"\t");
                 c=c*(i-j)/j;
            }
                System.out.println();
        }

    }
}
