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
    for(int i=0;i<n;i++)
    {
         if(arr[i]==data)
        {
            cout<<arr[i]<<endl;
            break;
        }
        else if(arr[i]<data&&arr[i+1]>data&& i<n-1)
        {
            cout<<arr[i+1]<<endl<<arr[i]<<endl;
            break;
        }
        
    }
    // write your code here
    
}
