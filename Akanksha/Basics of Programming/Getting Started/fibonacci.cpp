#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    int first=0, second=1, next;
    for(int i=0;i<n;i++){
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }
    
    
    //write your code here
    
}
