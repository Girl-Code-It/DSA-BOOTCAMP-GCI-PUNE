#include<bits/stdc++.h>
using namespace std;
#define pb push_back
void printencoding(string s,string asf){
    //base case
    if(s.length()==0){ 
        cout<<asf<<"\n";
        return;
    }
    else if(s.length()==1){
        if(s[0]=='0') return;
        else {
            int x=s[0]-'0';
            char y=char('a' +x-1);
            //asf+=y;
            cout<<asf+y<<"\n";
            return;
        }
    }
    else{
        string ch2n= s.substr(1);
        if(s[0]=='0') return;
        else {
            int x=s[0]-'0';
            char y=char('a' +x-1);
            //asf+=y;
            printencoding(ch2n,asf+y);
        }
        
        string ch12= s.substr(0,2);
        //s.substr(starting index,length of substr);
        string ch3n= s.substr(2);
        if(s[0]=='0') return;
        else {
            int tenth=s[0]-'0';
            int ones=s[1]-'0';
            int number=tenth*10+ones;
            if(number>26) return;
            else{
                char y=char('a' +number-1);
                //asf+=y;
                printencoding(ch3n,asf+y);
            }
        }
       
    }
    return;
}
int main(){
    string s;
    cin>>s;
    string asf;
    printencoding(s,asf);

    return 0;
}