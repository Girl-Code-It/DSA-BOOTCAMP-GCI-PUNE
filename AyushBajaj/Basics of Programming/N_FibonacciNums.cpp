#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    //Appr 1:
    /*int prev1 = 1;
    int prev2 = -1;
    
    while(n--){
        
        int num = prev1 + prev2;
        cout << num << endl;
        prev2 = prev1;
        prev1 = num;
        
    }*/
    
    //Appr2:
    int a = 0;
    int b = 1;
    
    while(n--){
        
        cout << a << endl;
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
        
    }

}
