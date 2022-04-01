#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    while(t>0){
        int factors=0;
        int n;
        cin>>n;
        for(int div=2; div*div<=n;div++){
            if(n%div==0){
                factors++;
                break;
            }
        }
        if(factors==0){
            cout<<"prime"<<endl;
         }
    else{
         cout<<"not prime"<<endl;
    }
    t--;
    }

   
    
}
