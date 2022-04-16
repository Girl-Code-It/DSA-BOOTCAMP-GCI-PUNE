#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    //write your code here
    int n;
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int mat[max][n];
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=max-arr[j]){
                cout <<"*	";
            }
            else{
                cout<<"	";
            }
        }
        cout<<endl;
    }
    
}
