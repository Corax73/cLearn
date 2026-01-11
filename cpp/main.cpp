#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num0 = 0, check = 0;
    string err = "Ошибка", numErr = "Цифры числа различаются", win = "Вы выиграли!";
    cin >> num0;

    if (num0 < 10 || num0 > 99)
    {
        cout << err << endl;
    }
    else
    {
        if (num0 / 10 != num0 % 10)
        {
            cout << numErr << endl;
        }
        else
        {
            cout << win << endl;
        }
    }
}