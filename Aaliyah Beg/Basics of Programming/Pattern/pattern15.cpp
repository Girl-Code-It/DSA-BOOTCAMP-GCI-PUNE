#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int k=n/2;
    int l=1;
    for(int i=1;i<=n;){
        for(int j=1;j<=k;j++){
             cout<<"     ";
        }
        int count1 =l;
        for(int j=1;j<=i;j++){
            cout<<count1<<"    ";
            if(j<=(i/2) ) count1++;
            else count1--;
        }
        i+=2;
        k--;
        l++;
        cout<<endl;
    }
    k=1;
    l=n/2;
    for(int i=n-2;i>0;){
        for(int j=1;j<=k;j++){
             cout<<"     ";
        }
        int count2 =l;
        for(int j=1;j<=i;j++){
            cout<<count2<<"    ";
            if(j<=(i/2) ) count2++;
            else count2--;
        }
        i-=2;
        k++;
        l--;
        cout<<endl;
    }

}