import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
  
       int t=sc.nextInt();
       for(int j=0;j<t;j++){
          int n=sc.nextInt();
        int flag=0;
        for(int i=2;i<=n/2;i++){
         if(n%i==0){
             flag=1;
             break;
         }
     }
    //  System.out.println(flag);
         if(flag==1){
             System.out.println("not prime");
         }
         else{
             System.out.println("prime");
         }
     }
  
       }
  }