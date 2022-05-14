import java.util.*;

public class Inverse
{

public static void main(String[] args) {
  // write your code here  
  
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int i=1,inverse=0;
    while(n!=0)
    {
        int r = n%10;
        inverse += i*(int)Math.pow(10,r-1);
        i++;
        n=n/10;
    }
    System.out.println(inverse);
 }
}
