#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int k=n/2+1;
    k=1;
    
    for(int i=n;i>=-1;){
        int count1=1;
        for(int j=1;j<=k;j++){
             cout<<count1<<"    ";
             count1++;
        }
        for(int j=1;j<=i;j++){
            cout<<"     ";
        }
        int count2=count1-1;
        for(int j=1;j<=k;j++){
            if(count2==n-1){ count2--;continue;}
            cout<<count2<<"    ";
            count2--;
        }
        i-=2;
        k++;
        cout<<endl;
    }

}