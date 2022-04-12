#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void togglecase(string &str)
{
    // write your code here
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
}

int main()
{
    string str;
    getline(cin, str);
    togglecase(str);
    cout << str;
    return 0;
}