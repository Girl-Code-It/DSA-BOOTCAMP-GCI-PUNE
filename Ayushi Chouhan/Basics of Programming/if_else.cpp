#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=5)
    {
   int a,b,c;
   cout<<"Enter three numbers:";
   cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a: "<<a<< " is greatest.\n";
        }
        else 
        {
            cout<<"c: "<<c<<" is greatest.\n";
        }
    }
    else if(b>c)
    {
        cout<<"b: "<<b<<" is greatest.\n";
    }
    else
    {
        cout<<"c: "<<c<<" is greatest.\n";
    }
    i++;
    }
}
// changed