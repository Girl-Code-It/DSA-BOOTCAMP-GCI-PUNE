#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int scale = n/2+1;
    //write your code here
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==1 || j==n){
                cout<<"*\t";
            }
            else if(i>=scale){
                if((i+j)==n+1 || (j==i)){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }

}