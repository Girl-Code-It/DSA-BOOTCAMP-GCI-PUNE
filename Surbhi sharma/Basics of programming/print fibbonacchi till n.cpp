#include <iostream>
using namespace std;

int fibb(int n){
    if(n<=1) return n;
    return (fibb(n-1)+fibb(n-2));
}
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    for(int i=0;i<n;i++){
    cout<<fibb(i)<<endl;
    }
    
}
