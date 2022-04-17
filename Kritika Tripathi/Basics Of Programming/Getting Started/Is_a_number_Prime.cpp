#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    int n;
    int count;

    //write your code here
    for(int i=1; i<=t; i++){
        cin>>n;
        count=0;
        for(int j=2; j<n; j++){
            if(n%j==0){
                count++;
            }
        }
        if(count==0){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not Prime"<<endl;
        }
    }
    
}