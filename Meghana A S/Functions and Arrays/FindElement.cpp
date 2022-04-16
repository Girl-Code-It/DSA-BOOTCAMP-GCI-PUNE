#include<iostream>
using namespace std;

//linear search time complexity is O(n)
//we can also use binary search which has lesser time complexity O(logn)
/*
    int l=0,h=n;
    int mid=(l+h)/2;
    while(l<=h)
    {
        if(d==arr[mid])
        {
            cout<<mid<<endl;
            flag=1;
        }
        else if(d>arr[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
        
    }
*/
int main(){
    //write your code here
    int n,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    int d;
    cin>>d;

    for(int i=0;i<n;i++)
{
    if(arr[i]==d){
        cout<<i<<endl;
        flag=1;
        break;}
}
    if(flag==0)
        cout<<-1<<endl;
    
}
