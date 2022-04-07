import java.rmi.server.SocketSecurityException;
import java.util.*;

public class Pattern8 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n= s.nextInt();
        for(int i =1 ;i<=n ;i++)
        {
            for(int j=1; j<=n ;j++)
            {
                if(i+j==n+1)
                {
                    System.out.print(" ");
                }

                else{
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
}
