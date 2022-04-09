/*
 You've to print all prime numbers between a range. Take as input "low", the lower limit of range.
Take as input "high", the higher limit of range.
 For the range print all the primes numbers between low and high (both included).class test5 {
    
*/
package tanisha.basicsofprogramming.gettingstarted; 
import java.util.*;
public class print_all_prime_till_n {
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int low = scn.nextInt();
        int high = scn.nextInt();
        for(int i=low;i<=high;i++) {
            prime(i);
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
            System.out.println(n);
        }
    }
}