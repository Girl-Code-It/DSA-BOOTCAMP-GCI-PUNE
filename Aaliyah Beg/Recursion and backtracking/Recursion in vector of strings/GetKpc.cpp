#include<bits/stdc++.h>
using namespace std;
#define pb push_back
static string keypad[]={
    ";.",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqr",
    "stu",
    "vwx",
    "yz"
};
vector<string> getkpc(string s,string keypad[] ){
    //base case
    if(!s.length()) {
        vector<string> base_ans;
        base_ans.pb("");
        return base_ans;
    }
    //recursive case
    char a=s[0];
    int vertex=int(a-'0');
    string chota_string=s.substr(1);
    vector<string> chota_ans=getkpc(chota_string,keypad);
    vector<string>bada_ans;
    for(auto x: chota_ans){
        int i=0;
        while(keypad[vertex][i]!='\0'){
            bada_ans.pb(keypad[vertex][i]+x);
            i++;
        }
    }
    return bada_ans;
}
int main(){
    // vector<vector<char> >keypad(10);
    // keypad[0].pb('.');
    // keypad[0].pb(';');
    // int j=97;
    // int i=1;
    // int k;
    // while(i<9){
    //     k=3;
    //     while(k--){
    //         keypad[i].pb(char(j));
    //     }
    //     i++;
    // }
    // keypad[9].pb('y');
    // keypad[9].pb('z');
    string n;cin>>n;
    vector<string>ans=getkpc(n,keypad);
    for(auto x : ans){
        cout<<x<<"\n";
    }
    return 0;
}