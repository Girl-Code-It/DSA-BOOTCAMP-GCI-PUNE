#include<iostream>
using namespace std;
int main()
{
    int first = 0, second = 1, sum = 0, n;
    cout<<"Enter the end term for the series: "; cin>>n;
     cout<<"Fibonacci Series: "<<first<<" "<<second<<" ";
   
    sum = first + second;
    while(sum <= n)
    {
        cout<<sum<<" ";
        first = second;
        second = sum;
        sum = first + second;
    }
     
    return 0;
}