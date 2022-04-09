import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
   Scanner sc=new Scanner(System.in);
   int n=sc.nextInt();
   Stack<Integer> st=new Stack<>();
   while(n>0){
       st.push(n%10);
       n=n/10;
  
   }
 while(!st.isEmpty()){
     System.out.println(st.pop());
 }
   }
  }