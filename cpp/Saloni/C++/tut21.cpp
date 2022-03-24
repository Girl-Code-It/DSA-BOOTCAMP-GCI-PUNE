#include<iostream>

using namespace std;

class Employee{


    private:
      int a,b,c;
    public:
       int d, e;
       void setData(int a , int b , int c);  //Declaration
       void getData(){

           cout<<"The value of a is "<<a<<endl;
           cout<<"The value of b is "<<b<<endl;
           cout<<"The value of c is "<<c<<endl;

       }
};


void Employee :: setData(int a1 , int b1 , int c1){
    a =a1;
    b=b1;
    c=c1;
}


int main(){
      Employee sal;
      // sal.a = 9 ----> this will throw error bcoz a is private
      sal.d = 34;
      sal.e = 89;
      sal.setData(1,2,4);
      sal.getData();

    return 0;
}