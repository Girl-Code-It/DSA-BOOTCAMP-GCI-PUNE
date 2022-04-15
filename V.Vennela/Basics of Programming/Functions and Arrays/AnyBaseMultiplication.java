import java.util.*;

public class AnyBaseMultiplication{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int b = scn.nextInt();
    int n1 = scn.nextInt();
    int n2 = scn.nextInt();

    int d = getProduct(b, n1, n2);
    System.out.println(d);
 }

 public static int getProduct(int b, int n1, int n2){
     // write your code here
     int i=1;
       int a1=0;
       while(n1!=0)
       {
           int rem=n1%10;
           a1=a1+rem*i;
           i=i*b;
           n1=n1/10;
       }
        i=1;
       int a2=0;
       while(n2!=0)
       {
           int rem=n2%10;
           a2=a2+rem*i;
           i=i*b;
           n2=n2/10;
       }
       int n=a2*a1;
       i=1;
       int res=0;
       while(n!=0)
       {
           int rem=n%b;
           res=res+rem*i;
           i=i*10;
           n=n/b;
       }
       return res;
 }

}
