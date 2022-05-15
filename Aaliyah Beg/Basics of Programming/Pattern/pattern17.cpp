// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;cin>>n;
//     for(int i=1;i<=n;){
//         for(int j=1;j<=n/2;j++){
//             if(i==n) cout<<"*    ";
//             else cout<<"     ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*    ";
//         }
//         i+=2;
//         cout<<endl;
//     }
//     for(int i=n-2;i>0;){
//         for(int j=1;j<=n/2;j++){
//             if(i==n) cout<<"*    ";
//             else cout<<"     ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*    ";
//         }
//         i-=2;
//         cout<<endl;
//     }

// }
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int k=(n/2)+1;
    for(int i=1;i<=k;){
        for(int j=1;j<=n/2;j++){
            if(i==k) cout<<"*    ";
            else cout<<"     ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*    ";
        }
        i++;
        cout<<endl;
    }
    for(int i=k-1;i>0;){
        for(int j=1;j<=n/2;j++){
            cout<<"     ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*    ";
        }
        i--;
        cout<<endl;
    }

}