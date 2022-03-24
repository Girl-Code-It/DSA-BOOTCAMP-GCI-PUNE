#include<iostream>

using namespace std;

int c =45;


// use :: to change the preference order of local and global variable with same name

int main(){
    // int a, b,c ;
    // cout<<"Enter the value of ";

    // ****************Reference Variables ***********************

    // Rohan Das ------> Monty -----> Rohu ----------> Dangerous Coder

    float x = 455 ;
    float &y = x;
    cout<<y;
    return 0;
}