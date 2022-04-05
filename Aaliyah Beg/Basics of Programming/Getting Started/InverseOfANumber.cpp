// The inverse of a number is defined as the number created by 
// interchanging the face value and index of digits of the number.
// e.g. for 426135 (reading from right to left, 5 is in place 1, 3 
// is in place 2, 1 is in place 3, 6 is in place 4, 2 is in place 5
// and 4 is in place 6), the inverse will be 416253 (reading from 
// right to left, 3 is in place 1, 5 is in place 2,2 is in place 3,
// 6 is in place 4, 1 is in place 5 and 4 is in place 6) More 
// examples - the inverse of 2134 is 1243 and inverse of 24153 is
// 24153
#include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;cin>>n;
//     string a[n];//string letters[12], does not mean a string of length 12. It is an array containing 12 strings.
//     string ans[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];//each time you are inputting a string

//     }
//     for(int i=n-1;i>-1;i--){
//         int j=int(a[i]-'0')//string-char will be error
//         ans[a[j]]=a[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i];

//     }
// }
using namespace std;
int main() {
    string a;
    // string ans;
    
    cin>>a;
    int n=a.length();
    char ans[n];
    // for(int i=0;i<n;i++){
    //     // ans+='0';
        
    // }
    for(int i=n-1;i>-1;i--){
    
        int j=n-int(a[i]-'0');
        int k=n-int(a[j]-'0');
        ans[k]=a[i];//not allowed..you cant change the char of a string
    }
    // cout<<ans;
    for(int i=0;i<n;i++) cout<<ans[i];
}
