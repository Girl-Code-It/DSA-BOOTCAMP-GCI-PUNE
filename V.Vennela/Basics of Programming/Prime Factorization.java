import java.util.*;

public class Prime Factorization
{
public static void main(String[] args) 
{
  // write your code here 
  Scanner sc = new Scanner(System.in);
  int n = sc.nextInt();
  int i = 2;
  while(n>1)
  {
    if(n%i==0)
    {
        System.out.print(i+" ");
        n=n/i;
    }
    else
    {
        i++;
    }
  }
 }
}
