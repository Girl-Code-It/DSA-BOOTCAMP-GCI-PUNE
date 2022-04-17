#include<iostream>
using namespace std;


int main(){
    //write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    for(int i=0; i<n; i++){
        if(d==arr[i]){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}