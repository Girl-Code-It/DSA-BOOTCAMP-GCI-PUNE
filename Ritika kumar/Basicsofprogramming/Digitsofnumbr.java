import java.util.*;

public class Digitsofnumbr
{
    public static void main(String[]args)
    {
        int n = 754;
        int temp = n;
        int count =0;
        while(temp!=0)
        {
            temp = temp/10;
            count++;
        }
        // System.out.println(count);

        int divisor =(int) Math.pow(10, count-1);

        while(divisor!=0)
        {
           
            int ans = n/divisor;
            System.out.println(ans);
            n = n%divisor;
            divisor = divisor/10;



        }
    }
}