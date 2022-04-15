#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    
    int s = (n+1)/2;

    for (int i=0; i<s; i++) {
        for (int j=s-i; j>0; j--) {
		cout << "*" <<"\t";
	  }
        for (int k=0; k<2*i+1; k++) {
		cout << "\t";
	  }
        for (int j=s-i; j>0; j--) {
		cout << "*" <<"\t";
	  }
        cout << endl;
    }
    
    for (int i=s-2; i>=0; i--) {
        
        for (int k=0; k<s-i; k++) {
            cout << "*" << "\t";
        }
        for (int j=0; j<2*i+1; j++) {
		cout << "\t";
        }
        for (int k=0; k<s-i; k++) {
            cout << "*" << "\t";
        }
        cout << endl;
    }
}
