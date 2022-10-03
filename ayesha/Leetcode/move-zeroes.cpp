#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// This is a functional problem. You have to complete this function.
// It takes as input an integer array. It should move all the zeroes
// to the end of the array.
void moveZeroes(vector<int> &nums)
{
    // write code here
    int n = nums.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

// function to display an array.
void display(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char **argv)
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    moveZeroes(v);
    display(v);
}