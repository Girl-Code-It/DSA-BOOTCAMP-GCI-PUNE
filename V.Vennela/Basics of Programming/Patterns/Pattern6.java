import java.util.*;

public class Pattern6 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n = scn.nextInt();
    int st = n / 2 + 1, sp = 1; 
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= st; j++) 
      {
        System.out.print("*	");
      }
      for (int j = 1; j <= sp; j++) 
      {
        System.out.print("	");
      }
      for (int j = 1; j <= st; j++) 
      {
        System.out.print("*	");
      }

      if ( i <= n / 2)
      { 
          st--;  
          sp+=2; 
      }
        else
        {
          st++; 
          sp-=2; 
            
        }
          System.out.println();   
        }
      

    }
}
