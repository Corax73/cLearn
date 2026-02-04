#include <iostream>
#include <string>

using namespace std;

void reverse(string &str)
{
    for (int i = 0; i < str.size() / 2; i++)
    {
        char temp = str[i];
        str[i] = str[str.size() - 1 - i];
        str[str.size() - 1 - i] = temp;
    }
}

int main()
{
    string s;
    getline(cin, s);
    reverse(s);
    cout << s;
}