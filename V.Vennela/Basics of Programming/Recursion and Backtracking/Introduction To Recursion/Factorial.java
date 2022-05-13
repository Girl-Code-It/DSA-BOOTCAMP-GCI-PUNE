import java.io.*;
import java.util.*;

public class Factorial{

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(factorial(n));
    }

    public static int factorial(int n)
    {
        if(n==0 || n==1)
            return 1;
        
        return n*factorial(n-1);
    }

}
