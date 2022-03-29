import java.util.*;
import java.io.*;
    public class Main{
    
    public static void main(String[] args) {
     Scanner sc=new Scanner(System.in);
     int n=sc.nextInt();
     int m=sc.nextInt();
     int on=n;
     int om=m;
     while(m%n!=0){
         int rem=m%n;
        
         m=n;
         n=rem;
     }
     int gcd=n;
     int lcm=(on*om)/gcd;
     System.out.println(gcd);
     System.out.println(lcm);
     }
    }