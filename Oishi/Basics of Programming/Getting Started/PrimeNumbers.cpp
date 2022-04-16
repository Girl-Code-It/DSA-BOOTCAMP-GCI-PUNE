#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    for (int i=0; i<t; i++) {
        int flag = 0;
        int n;
        cin >> n;
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0)
                flag = 1;
        }
        
        if (flag == 0) cout << "prime" << endl;
        else cout << "not prime" << endl;
    }
}