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
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else {
                cout << i;
            }
        }
        cout << endl;
    }    
        //lower half
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= (2 * (n - i) + 1); j++)
            {
                if (j % 2 == 0)
                {
                    cout << "*";
                }
                else {
                    cout << (n - i + 1);
                }
            }
            cout << endl;
        }
    return 0;
} 