import java.util.*;
   
   public class Reverse{
   
   public static void main(String[] args) {
     // write your code here  
     Scanner sc = new Scanner(System.in);
     Long n = sc.nextLong();
     while(n!=0)
     {
        System.out.println(n%10);
        n/=10;
     }
    }
   }
