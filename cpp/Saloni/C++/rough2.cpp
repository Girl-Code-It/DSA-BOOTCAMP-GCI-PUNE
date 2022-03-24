#include <iostream>
using namespace std;

class Base{
    int i,j;
    public:
    Base(){
        cout<<"base"<<endl;
    }
      virtual string print(){
          return " base";
      }
};

class Derived : public Base{

    public:
       Derived(){
           cout<<"dDC"<<endl;
       }
       Derived(int i){
           cout<<"DDC"<<endl;
       }
       virtual string print(){
           return "This is Derived class";
       }
};

void describe(Base p){
    cout<<p.print()<<endl;
}

int main(){
     
     Base b;
     Derived d;
    Derived d2(10);

     
    return 0;
}