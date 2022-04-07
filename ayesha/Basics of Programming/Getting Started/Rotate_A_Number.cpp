// 1. You are given two numbers n and k. You are required to rotate n, k times to the right. If k is positive, rotate to the right i.e. remove rightmost digit and make it leftmost. Do the reverse for negative value of k. Also k can have an absolute value larger than number of digits in n.
// 2. Take as input n and k.
// 3. Print the rotated number.
// 4. Note - Assume that the number of rotations will not cause leading 0's in the result. e.g. such an input will not be given
//    n = 12340056
//    k = 3
//    r = 05612340

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int temp = n;
    int count = 0;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    k = k % count;
    if (k < 0)
    {
        k = k + count;
    }
    int div = 1;
    int multi = 1;
    for (int i = 1; i <= count; i++)
    {
        if (i <= k)
        {
            div *= 10;
        }
        else
        {
            multi *= 10;
        }
    }
    int q = n / div;
    int r = n % div;
    int ans = r * multi + q;
    cout << ans;
    // write your code here
    return 0;
}