#include <iostream>
#include<string>

using namespace std;

class binary{
        string s ;
        private:
            void chk_bin(void);
        public:
            void read(void);
            
            void ones(void);
            void display(void);

    };

void binary :: read(void){

    cout<< "Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!= '0' && s.at(i)!= '1'){
            cout<<"Incorrect binary folder"<<endl;
            exit(0);
        }
    }
    
}

void binary :: ones(void){
    chk_bin();
     for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)== '0' ){
           s.at(i)= '1';
        }else{
           s.at(i)= '0';
        }
    }


}

void binary :: display(void){
     for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }


}



int main(){
    // OOPS - Classes and objects


    // C++ ---> initially called ---> C with classes by strouctroup
    // class --> extension of structures (in C)

    // Structures had limitations 
    //      --> members are public
    //       --> No methods
    // classes ---> structures + more
    // classes --> can have methods and properties 
    // classes --> can have few members as private & few as public
    //Structures in C++ are typedefed 
    // you can declare objects along with the class declarion like this:
    /* class Employee{
        // Class definition
    } harry , rohan, lovish ;*/

    // Nesting of member functions

    
    binary b ;
    b.read();
    // b.chk_bin();
    b.ones();
    b.display();



    return 0; 
}