import java.util.*;
    
    public class Digits{
    public static void digit(long n)
    {
        if((int)n==0)
            return ;
        digit(n/10);
        System.out.println(n%10);
    }
    
    public static void main(String[] args) {
      // write your code here  
    Scanner sc = new Scanner(System.in);
    long n = sc.nextLong();
    digit(n);
   }
  }
