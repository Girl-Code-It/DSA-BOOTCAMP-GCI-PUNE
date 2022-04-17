#include <iostream>
using namespace std;
int main(){
    int low, high;
    cin >> low >> high;
    int count;
    //write your code here
    for(int i=low; i<=high; i++){
        count=0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            cout<<i<<endl;
        }
    }
    return 0;
}