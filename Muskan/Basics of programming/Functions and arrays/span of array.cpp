#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int maxi=INT_MIN;
   int mini=INT_MAX;
   int *arr=new int[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  for(int i=0;i<n;i++){
      maxi=max(maxi,arr[i]);
      mini=min(mini,arr[i]);
  }
  
   cout<< maxi-mini<<endl;
    
}
