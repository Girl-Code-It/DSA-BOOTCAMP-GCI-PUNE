#include<bits/stdc++.h>
using namespace std;
#define pb push_back
void floodfill(int a[][1000],bool v[][1000],int n,int m,int i,int j,string psf){
    //base case
    if( j==-1 || i==-1 || i==n || j==m || a[i][j]==1 || v[i][j]==true){
        return;
    }
    if(i==n-1 && j==m-1){
        cout<<psf<<"\n";
        return;
    }
    //recursive case

    v[i][j]=true;
    floodfill(a,v,n,m,i-1,j,psf+'u');
    floodfill(a,v,n,m,i+1,j,psf+'d');
    floodfill(a,v,n,m,i,j-1,psf+'l');
    floodfill(a,v,n,m,i,j+1,psf+'r');
    v[i][j]=false;
    return;
 
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[1000][1000];
    bool v[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            v[i][j]=false;
        }
    }
    // int b=n-1;
    // int c=m-1;

    string psf;
    floodfill(a,v,n,m,0,0,psf);
    return 0;
}