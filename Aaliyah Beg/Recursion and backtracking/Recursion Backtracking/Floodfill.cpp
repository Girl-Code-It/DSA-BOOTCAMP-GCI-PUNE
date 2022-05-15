#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<string> floodfill(int a[][1000],bool v[][1000],int n,int m,int i,int j){

    //base case
    if( j==-1 || i==-1 || i==n || j==m || a[i][j]==1 || v[i][j]==true){
        vector<string>base_ans;
        return base_ans;
    }
    if(i==n-1 && j==m-1){
        vector<string>base_ans;
        base_ans.pb("");
        return base_ans;
    }
    //recursive case
    vector<string>bada_ans;
    v[i][j]=true;
    vector<string>chota_ans1=floodfill(a,v,n,m,i-1,j);
   
    for(auto x:chota_ans1){
        bada_ans.pb('u'+x);
    }
    vector<string>chota_ans2=floodfill(a,v,n,m,i+1,j);

    for(auto x:chota_ans2){
        bada_ans.pb('d'+x);
    }
    vector<string>chota_ans3=floodfill(a,v,n,m,i,j-1);

    for(auto x:chota_ans3){
        bada_ans.pb('l'+x);
    }
    vector<string>chota_ans4=floodfill(a,v,n,m,i,j+1);

    for(auto x:chota_ans4){
        bada_ans.pb('r'+x);
    }
    v[i][j]=false;

    return bada_ans;
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
    vector<string>ans=floodfill(a,v,n,m,0,0);

    for(auto x:ans){
        cout<<x<<"\n";
    }
    return 0;
}