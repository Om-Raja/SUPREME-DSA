#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // upper half
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // lower half
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= (2 * (n - i) + 1); j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}