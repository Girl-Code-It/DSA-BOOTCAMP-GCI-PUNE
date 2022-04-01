#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
  int t;
  cin >> t;

  //write your code here
  for (int i = 1; i <= t; i++)
  {
    int n;
    cin >> n;

    int factor = 0;
    for (int div = 2; div * div <= n; div++)
    {
      if (n % div == 0)
      {
        factor = factor + 1;
        break;
      }
    }
    if (factor == 0)
    {
      cout << "prime" << "\n";
    }
    else
    {
      cout << "not prime" << "\n";
    }

  }

}