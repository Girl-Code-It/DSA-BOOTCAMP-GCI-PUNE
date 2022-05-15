#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<string> TSS(int a[],int n,int sum){
    //base case
    if(sum==0){
        vector<string> base_ans;
        base_ans.push_back("");
         return base_ans;
    }

    if(n==-1 || sum<0 ){
        vector<string> base_ans;
        return base_ans;
    }
    
    //recursive case
    vector<string> bada_ans;
    int ele=a[n];
    vector<string> chota_ans1=TSS(a,n-1,sum);
     for(auto x:chota_ans1){
        bada_ans.pb(x+"");
    }
    vector<string> chota_ans2=TSS(a,n-1,sum-ele);
    for(auto x:chota_ans2){
        bada_ans.pb(x+char(n+49));
    }
    return bada_ans;

}
int main(){
    int n;
    cin>>n;
    int a[n];
    // bool v[n];
    for(int i=0;i<n;i++){ cin>>a[i];}
    int target;cin>>target;
    vector<string>ans=TSS(a,n-1,target);
    for(auto x: ans){
        cout<<x<<"\n";
    }

    return 0;

}