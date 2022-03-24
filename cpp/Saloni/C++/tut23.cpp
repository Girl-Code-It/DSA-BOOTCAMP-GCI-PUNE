#include <iostream>

using namespace std;

class Shop
{
    int itemsId[100];
    int itemPrice[100];
    int counter;

public:
    static int numberofppl;
    void initCounter(void) { counter = 0; }

    void seTPrice(void);
    void displayPrice(void);
    static void getnumber(void)
    {
        // cout<< counter; // throws error bcoz counter isn't static member

        cout << endl
             << numberofppl;
    }
};

int Shop::numberofppl; // default value 0;

void Shop ::seTPrice(void)
{
    cout << "Enter Id of your item no" << counter + 1 << endl;
    cin >> itemsId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{

    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item Id " << itemsId[i] << "is" << itemPrice[i];
    }
}
int main()
{

    Shop dukkan;
    dukkan.initCounter();
    dukkan.seTPrice();
    dukkan.seTPrice();
    dukkan.seTPrice();
    dukkan.displayPrice();
    cout << dukkan.numberofppl;
    return 0;
}