#include <iostream>

using namespace std;

void sort(int arr[], int n)
{
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main()
{
    int size = 0;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
        {
            cout << ' ';
        }
    }
    cout << endl;
}