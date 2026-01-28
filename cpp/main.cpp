#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int count = 0;
    string input = "";

    getline(cin, input);
    for (int i = 0; i < input.size(); i++)
    {
        if (isalpha(input[i]) && (i == input.size() - 1 || isspace(input[i + 1])))
        {
            count++;
        }
    }
    cout << count << endl;
}