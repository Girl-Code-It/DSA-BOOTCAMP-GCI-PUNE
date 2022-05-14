#include<bits/stdc++.h>
using namespace std;
vector<string> getsubsequence(string s){
    //base case
    if(!s.length()){
        vector<string> base_ans;
        base_ans.push_back("");
        return base_ans;
    }
    //recursive case
    char a=s[0];
    string chota_string=s.substr(1);
    vector<string> chota_ans= getsubsequence(chota_string);
    vector<string> bada_ans;
    for(auto x: chota_ans){
        bada_ans.push_back(a+x);
        bada_ans.push_back(""+x);
    }
    return bada_ans;
}
int main(){
    string s;
    cin>>s;
    vector<string>ans=getsubsequence(s);
    sort(ans.begin(),ans.end()); //lexicographically printing
    for(auto x: ans){
        cout<<x<<"\n";
    }
    return 0;

}