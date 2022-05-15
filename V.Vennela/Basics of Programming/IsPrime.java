import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
  
       // write ur code here
       int t = scn.nextInt();
       while(t!=0)
       {
           int n = scn.nextInt();
           boolean flag=true;
          
           for(int i=2;i<n;i++)
           {
               if(n%i==0)
                flag =false;
           }
            if(n<0)
             {
                 flag = false;
             }
           if(flag==true)
            System.out.println("prime");
           else
            System.out.println("not prime");
           t--;
       }
  
   }
  }
