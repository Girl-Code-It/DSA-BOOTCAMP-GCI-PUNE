public class Count_Digits
{
    public static void main(String[]args)
    {
        int n = 65784383;
        int temp =n;
        int count=0;
        while(temp!=0)
        {
           int x =temp%10;
           temp =temp/10;

            count++;

        }
        System.out.println(count);
    }
}