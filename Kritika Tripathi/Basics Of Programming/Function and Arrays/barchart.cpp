#include<bits/stdc++.h>
using namespace std;


int main(){
    //write your code here
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxn = INT_MIN;
    for(int i=0; i<n; i++){
        maxn = max(arr[i], maxn);
    }

    int i=0, count = maxn; // 6
    for(int i=0; i<maxn; i++, count--){  // 0 7 //1 6 //2 5 //3 4 //2 3 //1 2
        for(int j=0; j<n; j++){ //0 to 4
            if(arr[j]==count){ 
                cout<<"*\t";
                arr[j]--;
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    
}