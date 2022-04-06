#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int low, high;
    cin >> low >> high;
    bool t;
   
    
while(low<=high)
{ 
    t = true;
    for(int i=2;i<=sqrt(low); i++)
    {
        if(low%i==0)
        {
            t = false;
            break;
            
        }
    }
    
    if(t == true)
    {
     cout<<low<<endl;
        
    }
    
low++;}
return 0;
}
