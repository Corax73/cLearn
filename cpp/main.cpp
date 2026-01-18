#include <iostream>
#include <string>

using namespace std;

int main()
{
    int length = 0;
    string input, stop = "Stop";

    do
    {
        cin >> input;
        if (input != stop)
        {
            cout << input.size() << endl;
        }
    } while (input != stop);
}