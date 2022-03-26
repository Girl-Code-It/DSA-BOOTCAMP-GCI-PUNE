#include <iostream>
using namespace std;

// int main(int argc, char** argv)

int main()
{
  int n,i,j;
  cin >> n;

  //write your code here
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      cout << "*\t";
    }
    // for (k = i-1; k >= n; k--)
    // {
    //   cout << " ";
    // }
    cout<<"\n";
  }

}