package tanisha.basicsofprogramming.gettingstarted;
import java.util.*;
    
    public class digits_of_a_number{
    
    public static void main(String[] args) {
      // write your code here  
      
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        char[] ch = String.valueOf(n).toCharArray();
        for (int i = 0; i < ch.length; i++) {
            System.out.println(ch[i]);
        }
        scn.close();
    }
}
