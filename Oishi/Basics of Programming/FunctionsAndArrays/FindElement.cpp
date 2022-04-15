#include<iostream>
using namespace std;


int main(){
    //write your code here
    int n;
    cin >> n;
    
    int arr[n];
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        arr[i] = x;
    }
    
    int d;
    cin >> d;
    
    int i;
    for (i=0; i<n; i++) {
        if (arr[i] == d) {
            cout << i << endl;
            break;
        }
    }
    
    if (i == n) 
        cout << "-1" << endl;
}