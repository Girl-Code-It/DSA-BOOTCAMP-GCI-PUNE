package tanisha.basicsofprogramming.gettingstarted;
import java.util.*;
public class Is_a_number_prime {
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        for (int i = 0;i<n;i++) {
            prime(scn.nextInt());
        }
        scn.close();
    }

    public static void prime(int n) {
        int t=0;
        for(int i=2;i<=n/2;i++) {
            if(n%i==0) {
                t=1;
                break;
            }
        }
        if(t==0) {
            System.out.println("prime");
        } else {
            System.out.println("not prime");
        }
    }
}