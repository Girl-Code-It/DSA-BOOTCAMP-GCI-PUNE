package tanisha.basicsofprogramming.gettingstarted;
import java.util.*;

public class inverse_of_a_number{

public static void main(String[] args) {

    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();

    int inverse = 0;
    int power = 1;

    while (n > 0) {
      int digit = n % 10;
      n = n / 10;
      inverse += power * Math.pow(10, digit - 1);
      power++;
    }
    System.out.println(inverse);
  

  
 }
}