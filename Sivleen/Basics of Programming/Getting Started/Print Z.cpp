#include<iostream>
using namespace std;
int main(int argc, char** agrc) {
  for(int r=0; r<5; r++){
	    for(int c=0;c<5;c++){
	        if(r==0 || r==4)
	            cout<<"*";
	        else{
	            if(c == 4-r)
	                cout<<"*";
	            else
	                cout<<" ";
	        }
	    }
	    cout<<"\n";
	}

}