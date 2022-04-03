package tanisha.basicsofprogramming.gettingstarted;
import java.util.*;
  
  public class count_digits_of_a_number {
 public static void main(String[] args) {
      int d=0;
      Scanner in=new Scanner(System.in);
      int n=in.nextInt();   
      while(n>0){
          int k=n%10;
          d++;
          n=n/10;
      }
      System.out.println(d);
    // write your code here  
   }
  }