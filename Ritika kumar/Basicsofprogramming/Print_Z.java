public class Print_Z {
    public static void main(String []args)
    {
        for(int i=0 ;i<5; i++)
        {
            System.out.print("*");
        }
        System.out.println();
        for(int i=3 ;i>0 ;i--)
        {
            for(int j=i-1 ;j>0 ;j--)
            {
                System.out.print(" ");
            }
            System.out.println("*");
            System.out.println();
        }

        for(int i=0 ;i<5;i++)
        {
            System.out.print("*");
        }


    }
}
