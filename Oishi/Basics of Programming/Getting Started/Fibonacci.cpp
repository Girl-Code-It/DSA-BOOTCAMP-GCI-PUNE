#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int first = 0;
    int second = 1;
    
    for (int i=0; i<n; i++) {
        cout << first << endl;
        int temp = first;
        first = second; 
        second = temp + second;
    }
    
}