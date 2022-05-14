import java.util.*;
    
    public class gcd_lcm{
    
    public static void main(String[] args) {
      // write your code here 
      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      int x=0;
      if(a<b)
        x=a;
      else
        x=b;
      int i=x;
      while(i>0)
      {
        if(a%i==0 && b%i==0)
            break;
        i--;
      }
      System.out.println(i);
      System.out.println((a*b)/i);
     }
    }
