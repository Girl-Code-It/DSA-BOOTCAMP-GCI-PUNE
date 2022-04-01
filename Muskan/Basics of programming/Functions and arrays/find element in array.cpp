#include<iostream>
using namespace std;
int findelement(int n,int d,int* arr){
   for(int i=0;i<n;i++){
       if(arr[i]==d){
           return i;
       }
   } 
   return -1;
}
int main(){
   int n;
   cin>>n;
  
   int* arr=new int[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
     }
   int d;
   cin>>d;
   int ans=findelement(n,d,arr);
   cout<<ans<<endl;
 

 
}
