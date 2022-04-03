import java.util.*;

public class Inverse_a_Number {
 public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n= s.nextInt();
       int inverse =0;
       int originalindex=1;


        while(n!=0)
        {
          int temp = n%10;
          int inverseindex = temp;
          int inversedigit = originalindex;

          originalindex++;

          inverse =  inverse+(inversedigit * (int)(Math.pow(10, inverseindex-1)));
          n=n/10;

        }
        System.out.println(inverse);
        
 }   
}
