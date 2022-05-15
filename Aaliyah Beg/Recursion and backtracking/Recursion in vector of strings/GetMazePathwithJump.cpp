#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<string> getmazepaths(int n,int m){
    //base case
    if(n<0 || m<0){
        vector<string> base_ans;
        return base_ans;
    }
    if(m==0 && n==0){
        vector<string> base_ans;
        base_ans.pb("");
        return base_ans;
    }
    //recursive case
    vector<string> bada_ans;
    int r=1;
    while(r<n+1){
        vector<string> chota_ans1=getmazepaths(n-r,m);
        for(auto x:chota_ans1){
            string str;
            str+='h';
            str+=char(r+48);
            bada_ans.pb(str+x);
        }
        r++;
    }
    int c=1;
    while(c<m+1){
        vector<string> chota_ans2=getmazepaths(n,m-c);
        for(auto x:chota_ans2){
            string str;
            str+='v';
            str+=char(c+48);
            bada_ans.pb(str+x);
        }
        c++;
    }
    int d=1;
    while(d<n+1 && d<m+1){
        vector<string> chota_ans3=getmazepaths(n-d,m-d);
        for(auto x:chota_ans3){
            string str;
            str+='d';
            str+=char(d+48);
            bada_ans.pb(str+x);
        }
        d++;
    }
    return bada_ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<string>ans=getmazepaths(n-1,m-1);
    for(auto x : ans){
        cout<<x<<"\n";
    }
    return 0;
}