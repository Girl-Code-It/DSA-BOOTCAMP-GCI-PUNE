import java.util.*;
  
  public class AnyBaseToAnyBase{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int sourceBase = scn.nextInt();
     int  destBase= scn.nextInt();
     int i=1;
     int ans=0;
     while(n!=0)
     {
        int rem = n%10;
        ans=ans+rem*i;
        i=i*sourceBase;
        n=n/10;
     }
     int j=1;
     int res=0;
     while(ans!=0)
     {
        int rem=ans%destBase;
        res=res+rem*j;
        j=j*10;
        ans=ans/destBase;
     }
     System.out.println(res);
   }   
  }
