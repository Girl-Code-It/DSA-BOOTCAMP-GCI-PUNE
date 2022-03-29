import java.util.*;
   
   public class Rotate
   {
   
   public static void main(String[] args) 
   {
     // write your code here
     Scanner sc = new Scanner(System.in);
     int n = sc.nextInt();
     int k = sc.nextInt();
     int size=0;
     int n1=n;
     while(n1!=0)
     {
         size++;
         n1/=10; 
     }
      k=k%size;
     if(k<0)
     {
       size= size+k;
     }
    int d=1,m=1;
    for(int i=1;i<=size;i++)
    {
        if(i<=k)
            d*=10;
        else
            m*=10;
    }
       
     
     System.out.println((n%d)*m+(n/d)); 
     
     
    }
   }
