#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string tolowerString(string str)
{
    for (int i = str.size() - 1; i >= 0; i--)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

string revertString(string str)
{
    string resp = "";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        resp += str[i];
    }
    return resp;
}

bool isPalindrome(string *ptr1, string *ptr2)
{
    return *ptr1 == *ptr2;
}

int main()
{
    string input = "", revertedStr = "", yes = "yes", no = "no";

    getline(cin, input);

    if (input.size() > 1)
    {
        revertedStr = revertString(input);
        input = tolowerString(input);
        revertedStr = tolowerString(revertedStr);

        if (isPalindrome(&input, &revertedStr))
        {
            cout << yes << endl;
        }
        else
        {
            cout << no << endl;
        }
    }
    else
    {
        cout << yes << endl;
    }
}