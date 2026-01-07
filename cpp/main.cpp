#include <iostream>

using namespace std;

int main()
{
    int count = 3;
    char hit = 'x', empty = '.';

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == 1 && j == 1)
            {
                cout << hit;
            }
            else
            {
                cout << empty;
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}