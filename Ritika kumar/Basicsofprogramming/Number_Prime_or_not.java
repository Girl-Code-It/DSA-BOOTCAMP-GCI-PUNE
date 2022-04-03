import java.util.Scanner;

public class Number_Prime_or_not {
    public static void main(String[] args) {
        Scanner s =new Scanner(System.in);
        int t= s.nextInt();

        for(int i=0 ;i<t ;i++)
        {
            int n=s.nextInt();
        

        int count =0;
        
        for(int div =2 ;div*div<=n ;div++)
        {
            if((n%div)==0)
            {
                count ++;
                break;

            }
        }


        if(count==0)
        {
            System.out.println("prime");
        }

        else{
            System.out.println("not prime");
        }
    }
    }
}
