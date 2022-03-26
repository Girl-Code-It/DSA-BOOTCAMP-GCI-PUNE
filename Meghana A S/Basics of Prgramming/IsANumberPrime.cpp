#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int flag=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                //cout<<"not prime"<<endl;
                flag=1;
                break;
            }
            
        }
        if (flag==1)
            cout<<"not prime"<<endl;
        else
            cout<<"prime"<<endl;
    }

    //write your code here
    
}