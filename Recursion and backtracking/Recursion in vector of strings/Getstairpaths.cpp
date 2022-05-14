//euler path chali --count ek nhi hai-- three calls mein/multiple calls
//postorder mein kaam horha hai

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<string> getstairpaths(int n){
    //base case
    if(n<0) {
        vector<string>base_ans;
        return base_ans;// koi rasta nhi hai 
    }
    if(n==0){
        vector<string>base_ans;
        base_ans.pb("");//hai ek rasta --> dont walk keep standing you are already there
        return base_ans;
    }
    //recursive case
    vector<string>bada_ans;
    vector<string> chota_ans1=getstairpaths(n-1);
    for(auto x: chota_ans1){
        bada_ans.pb("1"+x);
    }
    vector<string> chota_ans2=getstairpaths(n-2);
    for(auto x: chota_ans2){
        bada_ans.pb("2"+x);
    }
    vector<string> chota_ans3=getstairpaths(n-3);
    for(auto x: chota_ans3){
        bada_ans.pb("3"+x);
    }
    return bada_ans;
}
int main(){
    int n;cin>>n;
    vector<string>ans=getstairpaths(n);
    for(auto x:ans){
        cout<<x<<"\n";
    }
    return 0;
}