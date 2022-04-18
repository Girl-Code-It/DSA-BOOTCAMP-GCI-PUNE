#include <iostream>
using namespace std;

int main()
{
    string su = "Jatin Goyal";
    transform(su.begin(), su.end(), su.begin(), ::toupper);
    cout << su << endl;
    string sl = "Jatin Goyal";
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    cout << sl << endl;
    return 0;
}