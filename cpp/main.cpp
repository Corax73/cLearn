#include <iostream>
using namespace std;

int main()
{
    int num0 = 0;
    cin >> num0;
    int minDivider = num0;

    for (int i = 2; i * i <= num0; ++i)
    {
        if (num0 % i == 0)
        {
            minDivider = i;
            break;
        }
    }
    cout << minDivider << endl;
}