#include <iostream>
using namespace std;

int main()
{
    int num0 = 0, isSimple = 1;
    cin >> num0;

    if (num0 > 1)
    {
        for (int i = 2; i < num0; i++)
        {
            if (num0 % i == 0)
            {
                isSimple = 0;
                break;
            }
        }
    }
    else
    {
        isSimple = 0;
    }
    if (isSimple)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}