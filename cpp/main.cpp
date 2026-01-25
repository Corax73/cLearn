#include <iostream>
#include <string>

using namespace std;

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

    cin >> input;

    if (input.size() > 1)
    {
        revertedStr = revertString(input);

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