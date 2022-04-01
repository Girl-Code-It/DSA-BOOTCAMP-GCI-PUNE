import java.util.*;

public class Fibonacci {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        int a=0;
        int b=1;
        System.out.println(a);

        for(int i=1; i<n ;i++)
        {
            System.out.println(b);

            int c = a+b;
            a=b;
            b=c;
        }
    }
    
}
