#include <iostream>
using namespace std;

int main() {
    int x = 0, isSimple = 1;
    cin >> x;
    if (x > 1)
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isSimple = 0;
                break;
            }
        }
    } else {
        isSimple = 0;
    }
    cout << (isSimple ? "yes" : "no") << endl;
}