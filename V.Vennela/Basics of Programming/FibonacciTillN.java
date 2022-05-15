import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      // write your code here
     
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int i=0,x=0,y=1,t=0;
      System.out.println(x);
      System.out.println(y);
      while(i<=n)
      {
        t=x+y;
        x=y;
        y=t;
        if(t<=n)
        {
            System.out.println(t);
        }
        i++;
      }
   }
  }
