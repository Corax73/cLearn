#include <iostream>
using namespace std;

int main()
{
    int num0 = 0, num1 = 0;

    cin >> num0 >> num1;

    int arr[num0][num1];

    for (int i = 0; i < num0; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < num0; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            cout << arr[i][j];
            if (j < num1 - 1)
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}