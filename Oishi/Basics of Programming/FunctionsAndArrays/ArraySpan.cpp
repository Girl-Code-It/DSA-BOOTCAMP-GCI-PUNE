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
    
    int max = -1, min = 1000000001;
    for (int i=0; i<n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    cout << max - min << endl;
}