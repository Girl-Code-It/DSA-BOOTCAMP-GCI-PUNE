#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for (int div = 2; div*div <= n; div++)
    {
      while (n % div == 0)
      {
        cout << div << " ";
        n = n / div;
      }
    }
    if (n != 1)
    {
      cout << n;
    }
}
