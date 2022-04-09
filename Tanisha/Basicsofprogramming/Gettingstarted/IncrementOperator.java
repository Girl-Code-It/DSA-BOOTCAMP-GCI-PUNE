package tanisha.basicsofprogramming.gettingstarted;

public class IncrementOperator{
  public static void main(String[] args){
    int i = 10;
    if(i++ == i)
      System.out.println(i + " is good");
    else
      System.out.println(i + " is bad");

    int j = 20;
    if(++j == j)
      System.out.println(j + " is good");
    else
      System.out.println(j + " is bad");
  }
}
// answers to the above questions: 11 is bad 21 is good
