#include <iostream>

using namespace std;

class complex
{
    int a;
    int b;
// Below line means that non member - sumComplex function is allowed to do anything with my private members(data)
    friend complex sumComplex(complex o1, complex o2);
public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    
    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + i" << b << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{

    complex c1, c2, c3 , sum;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    sum = sumComplex(c1 , c2);

    sum.printNumber();

    return 0;
}



/* Properties of friend functions
1. Not in the scope of class
2.since it is not in the scope of the class, it cannot be called from the object of that class.
   c1.sumComplex()== Invalid
3. can be invoked without the help of any object
4.Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access
  any member.


*/
