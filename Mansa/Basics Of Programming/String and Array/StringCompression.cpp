#include <iostream>
using namespace std;

void compress_str(string str)
{

    int j = 0;
    for (int i = 0; i < str.length(); i++)
    {

        int count = 0;
        while (i < str.length() - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        count == 0 ? cout << str[i] : cout << str[i] << count;
    }
}

int main()
{
    string str = "abcdddddef";
    compress_str(str);
    return 0;
}