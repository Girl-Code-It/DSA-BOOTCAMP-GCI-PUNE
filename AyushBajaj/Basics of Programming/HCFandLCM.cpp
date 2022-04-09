#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    //Approach 1:
    int n1 = num1, n2= num2;
    //write your code here
    while(num1 != num2){
        
        if(num1 >= num2){
            num1 -= num2;
        }
        else{
            num2 -= num1;
        }
        
    } 
    
    cout << num1 << endl;
    cout << (n1*n2)/num1 << endl;
}
