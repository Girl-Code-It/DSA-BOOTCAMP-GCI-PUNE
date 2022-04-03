import java.util.Scanner;

public class GcdandLcm
{
    public static void main(String[]args)
    {
        Scanner s  = new Scanner(System.in);
        int num1 = s.nextInt();
        int num2 =s.nextInt();
        int temp1 =num1;
        int temp2 = num2;
    

       
        while(num1%num2!=0)
        {
           int remainder = num1 %num2;
           num1= num2;
           num2 = remainder;
          

        }

        int gcd = num2;
        int lcm = (temp1*temp2)/gcd;

        System.out.println("GCD IS : "+ gcd);
        System.out.println("LCM IS : "+ lcm);
    }
}