// 1. You are given n number of bulbs. They are all switched off. A weird fluctuation in voltage hits the circuit n times. In the 1st fluctuation all bulbs are toggled, in the 2nd fluctuation every 2nd bulb is toggled, in the 3rd fluctuation every 3rd bulb is toggled and so on. You've to find which bulbs will be switched on after n fluctuations.
// 2. Take as input a number n, representing the number of bulbs.
// 3. Print all the bulbs that will be on after the nth fluctuation in voltage.

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; i++)
    {
        cout << i * i << "\n";
    }
    // write your code here
}