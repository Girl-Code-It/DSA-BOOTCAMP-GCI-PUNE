
import java.util.*;
public class Primefactors {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n =s.nextInt();
        for(int div =2; div*div<= n ;div++)
        {
            while((n%div)==0)
            {
                System.out.println(div);
                n =n/div;
            }

        }

        if(n!=1)
        {
            System.out.println(n);
        }

    }
}
