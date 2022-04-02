import java.util.Scanner;

public class PrimestillN {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int lo= s.nextInt();
        int hi= s.nextInt();
       

        for(int i =lo ; i<hi ;i++)
        {
            int count =0;
            for(int div =2 ; div*div<=i ; div++)
            {
                if((i%div)==0)
                {
                    
                    count++;
                    break;
                }

            }


            if(count ==0)
            {
                System.out.println(i);
            }
        }
    }
}
