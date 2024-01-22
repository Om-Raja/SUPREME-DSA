#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int k = i, p = (2 * i - 2);
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << k;
            k++;
        }
        for (int j = 1; j < i; j++)
        {
            cout << p;
            p--;
        }
        cout << endl;
    }
    return 0;
}