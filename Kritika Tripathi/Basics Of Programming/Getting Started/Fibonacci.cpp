#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int first = 0;
    int second = 1;
    int next;
    //write your code here
    for(int i=1; first<=n; i++){
        cout<<first<<endl;
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}