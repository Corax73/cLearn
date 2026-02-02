#include <iostream>
using namespace std;

void diamond(int size)
{
    int width = (size * 2) - 1;
    int middle = width / 2;
    int left = middle, right = middle;
    for (int i = 0; i < width; i++)
    {
        if (i <= middle)
        {
            for (int j = 0; j < left; j++)
            {
                cout << ' ';
            }
            for (int j = left; j < right + 1; j++)
            {
                cout << '*';
            }
            for (int j = right + 1; j < width; j++)
            {
                cout << ' ';
            }
            cout << endl;
            if (i != middle)
            {
                if (left > 0)
                {
                    left--;
                }
                if (right < width)
                {
                    right++;
                }
            }
        }
        else
        {
            if (left < width)
            {
                left++;
            }
            if (right > 0)
            {
                right--;
            }
            for (int j = left; j > 0; j--)
            {
                cout << ' ';
            }
            for (int j = left; j < right + 1; j++)
            {
                cout << '*';
            }
            for (int j = right + 1; j < width; j++)
            {
                cout << ' ';
            }
            cout << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    diamond(n);
}