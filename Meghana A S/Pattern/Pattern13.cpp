#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for (int i = 0; i < n ; i++)
    {
      int icj = 1;
      for (int j = 0; j<=i; j++)
      {
        cout<<icj<<"\t";
        int icjp1 = (icj * (i - j)) / (j + 1);
        icj = icjp1;

      }
      cout<<endl;
    }
    //write your code here
    
}
