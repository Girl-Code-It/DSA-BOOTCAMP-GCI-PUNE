#include <iostream>
using namespace std;

int main(int argc, char **argv){
    long int n;
    cin >> n;
    int arr[100];
    int i=0;
    while(n>0)
    {
        //cout<<n%10<<endl;
        arr[i]=n%10;
        i++;
        n=n/10;
    }
    for(int j=i;j>=0;j--)
    {
        cout<<arr[j]<<endl;
    }
    //write your code here
    
}
