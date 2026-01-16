#include <iostream>

using namespace std;

int main()
{
    int num0 = 0, remainder = 0, divider = 10;

    cin >> num0;
    if (num0 == 0)
    {
        cout << num0 << endl;
    }
    else
    {
        do
        {
            remainder = num0 % divider;
            num0 /= divider;
            cout << remainder;
        } while (num0 > 0);
    }
}