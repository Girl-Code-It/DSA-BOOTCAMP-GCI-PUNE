#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> get_stair_paths(int n)
{
    // Write your code here
    if (n == 0)
    {
        vector<string> brr;
        brr.push_back("");
        return brr;
    }

    if (n < 0)
    {
        vector<string> brr;
        return brr;
    }
    vector<string> ans;
    for (int step = 1; step <= 3; step++)
    {
        vector<string> small_ans = get_stair_paths(n - step);
        for (int j = 0; j < small_ans.size(); j++)
        {
            string ss = small_ans[j];
            char no_of_steps = (char)(step + '0');
            string ans_to_add = no_of_steps + ss;
            ans.push_back(ans_to_add);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = get_stair_paths(n);
    int cnt = 0;

    cout << '[';
    for (string str : ans)
    {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}