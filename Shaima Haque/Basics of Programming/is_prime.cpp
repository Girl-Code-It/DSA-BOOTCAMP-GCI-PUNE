#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    int n;
    //write your code here
    for(int i = 0;i<t;i++){
        cin >> n;
        int flag  = 0;
        if(n <= 1){
            flag = 1;
        }else{
        for(int j = 2;j<=(int)n/2;j++){
            if(n%j == 0){
                flag = 1;
                break;
            }
        }
        }
        if(flag == 1){
            cout << "not prime" <<endl;
        }else{
            cout << "prime" << endl;
        }
    }
}