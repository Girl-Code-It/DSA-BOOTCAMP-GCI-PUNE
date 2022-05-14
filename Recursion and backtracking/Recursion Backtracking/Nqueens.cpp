#include<bits/stdc++.h>
using namespace std;
#define pb push_back
bool check(int a[1000][1000],int i,int j,int n){
    for(int x=i-1;x>-1;x--){

        if(a[x][j]==1){
            return false;
        }
    }
    for(int x=1;x<=i and x<=j;x++){
        if(a[i-x][j-x]==1){
            return false;
        }
    }
    for(int x=1;x<=i and x<n-j;x++){
        if(a[i-x][j+x]==1){
            return false;
        }
    }
    return true;
}

void Nqueens(int a[1000][1000],int n,int i){
    //base case
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        return;
    }
    for(int j=0;j<n;j++){
        if(check(a,i,j,n)){
            a[i][j]=1;
            Nqueens(a,n,i+1);
            a[i][j]=0;
        }
    }
    return;
}
// recursion ka tree visulaize karte hain usmein 
//left mein pre written cheez hoti hai when we are going down
//phir recursive call
//phir right mein post written cheez hoti hai when we are going up
int main(){
    int n;cin>>n;
    int ans[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=0;
        }
    }
    Nqueens(ans,n,0);
    return 0;
}