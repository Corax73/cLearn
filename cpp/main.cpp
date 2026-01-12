#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x = 0, y = 0;
    string err0 = "Неверная строка", err1 = "Неверный столбец";
    string arr[3][3] = {
        {"Superman", "Batman", "Spiderman"},
        {"Ironman", "Wolverine", "Aquaman"},
        {"Thor", "Hulk", "Flash"},
    };

    cin >> x >> y;

    if (x > 3 || x == 0)
    {
        cout << err0 << endl;
    }
    else if (y > 3 || y == 0)
    {
        cout << err1 << endl;
    }
    else
    {
        cout << arr[x - 1][y - 1] << endl;
    }
}