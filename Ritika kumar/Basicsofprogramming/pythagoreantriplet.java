import java.util.*;



public class pythagoreantriplet
{
    public static void main(String[]args)
    {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        int c = s.nextInt();

        int max =a;
        if(b>max)
        {
            max =b;
        }

        if(c>max)
        {
            max= c;       
        }

        if(max==a)
        {
            System.out.println((b*b+c*c)==(a*a));
        }

        else if(max==b)
        {
            System.out.println((a*a+c*c)==(b*b));
        }
        else if(max==c)
        {
            System.out.println((b*b+a*a)==(c*c));
        }
    }
}