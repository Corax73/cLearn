#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x = 0, count = 0;

    do
    {
        cin >> x;
        cout << x;
        if (x != 0)
        {
            cout << ' ';
        }
        else
        {
            cout << endl;
        }
        count++;
    } while (x != 0);
    cout << "Количество чисел: " << count << endl;
}