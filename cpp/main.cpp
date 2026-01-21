#include <iostream>
using namespace std;

int main()
{
    int num0 = 0;

    cin >> num0;

    double a[num0], max = 0;

    for (int i = 0; i < num0; i++)
    {
        cin >> a[i];
    }

    max = a[0];
    for (int i = 0; i < num0; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << max << endl;
}