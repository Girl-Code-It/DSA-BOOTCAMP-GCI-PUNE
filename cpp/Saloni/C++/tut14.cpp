#include<iostream>

using namespace std ;

union money
    {
        int rice;
        char car;
        float punds;
    };

int main(){

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';

    // cout<<m1.car<<endl;
    // cout<<m1.rice<<endl;
    // cout<<m1.punds<<endl;

    enum Meal {breakfast , lunch , dinner};
    Meal m1 = breakfast ;  
    cout<<(m1==0);   
    // cout<<breakfast;  
    // cout<<lunch;
    // cout<<dinner;

    return 0;
}