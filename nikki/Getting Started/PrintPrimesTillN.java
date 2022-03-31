import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
     Scanner sc=new Scanner(System.in);
     int low=sc.nextInt();
     int high=sc.nextInt();
     
     List<Integer> ans=new ArrayList<>();
     for(int i=low;i<=high;i++){
         boolean flag=false;
         for(int j=2;j<=Math.sqrt(i);j++){
            if(i%j==0)
            {
                flag=true;
                break;
            }
         }
         if(!flag){
            System.out.println(i);
         }
     }
     
   }
  }