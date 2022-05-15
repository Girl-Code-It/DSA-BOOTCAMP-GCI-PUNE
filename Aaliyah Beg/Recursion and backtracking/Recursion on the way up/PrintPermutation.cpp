#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<string> printpermutation(string s){
    //base case
    if(!s.length()){
        vector<string>base_ans;
        base_ans.pb("");
        return base_ans;
    }
    //recursive case
    vector<string>bada_ans;
    for(int i=0;i<s.length();i++){
        char a=s[i];
        string chota_string=s.substr(0,i)+s.substr(i+1);
        vector<string>chota_ans=printpermutation(chota_string);
        for(auto x: chota_ans){
            bada_ans.pb(a+x);
        }
    }
    return bada_ans;
}
int main(){
    string s;
    cin>>s;
    vector<string>ans=printpermutation(s);
    for(auto x:ans){
        cout<<x<<"\n";
    }
    return 0;
}