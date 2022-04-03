package tanisha.basicsofprogramming.gettingstarted;
import java.util.*;
public class reverse_a_number {
    public static void main(String[] args){
     
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        char[] ch = String.valueOf(n).toCharArray();
        for (int i = ch.length-1; i>=0; i--) {
            System.out.println(ch[i]);
        }
        scn.close();
    }
}


