#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    int f=-1,l=-1; //initially both are set to -1
    for(int i=0;i<n;i++) //as soon as we find first index break
    {
        if(arr[i]==data)
        {
            f=i;
            break;
        }
    }
    l=f; //if only one element first and last are same
    for(int i=f;i<n;i++)
    {
         if(arr[i]==data)
        {
            l=i;
           // break;
        }
    }
    cout<<f<<endl<<l;
    // write your code here
    
    
}
