#include<iostream>

using namespace std ;

int main(){
    int num1, num2 ;
    cout<< "Enter the value of the num1: \n";/*<< is called Insertion operator */
    cin>> num1; // >> is called Extraction operator 

    cout<< "Enter the value of the num2: \n";/*<< is called Insertion operator */
    cin>> num2; // >> is called Extraction operator 

    cout<< "The sum is" << num1 + num2;/*<< is called Insertion operator */

    return 0;
}