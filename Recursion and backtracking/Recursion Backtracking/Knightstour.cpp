#include<bits/stdc++.h>
using namespace std;
#define pb push_back
void knightstour(int a[1000][1000],int n,int r,int c,int step){
    //base case
    if(r<0 || c<0 || r>=n || c>=n || a[r][c]!=0){
        return ;
    }
    if(step==n*n) {
        a[r][c]=step;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"\n-------------------------- \n";
        a[r][c]=0;
        return;
    }
    a[r][c]=step;
    knightstour(a,n,r-2,c+1,step+1);
    knightstour(a,n,r-1,c+2,step+1);
    knightstour(a,n,r+1,c+2,step+1);
    knightstour(a,n,r+2,c+1,step+1);
    knightstour(a,n,r+2,c-1,step+1);
    knightstour(a,n,r+1,c-2,step+1);
    knightstour(a,n,r-1,c-2,step+1);
    knightstour(a,n,r-2,c-1,step+1);
    a[r][c]=0;
    return;


}
int main(){
    int n;cin>>n;
    int r;cin>>r;
    int c;cin>>c;
    int a[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    knightstour(a,n,r,c,1);
}