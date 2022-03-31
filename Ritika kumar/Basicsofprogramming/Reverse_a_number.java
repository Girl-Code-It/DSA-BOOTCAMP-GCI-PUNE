public class Reverse_a_number
{
    public static void main(String[]args)
    {
        int n=457;
        int temp =n;
        while(temp!=0)
        {
            int x =temp%10;
            System.out.print(x);
            temp=temp/10;
        }
    }
}