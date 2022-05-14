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
    vector<string> chota_ans1=getmazepaths(n-1,m);
    for(auto x:chota_ans1){
        bada_ans.pb('h'+x);
    }
    vector<string> chota_ans2=getmazepaths(n,m-1);
    for(auto x:chota_ans2){
        bada_ans.pb('v'+x);
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