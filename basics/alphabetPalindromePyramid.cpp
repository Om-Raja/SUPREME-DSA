#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j <= i)
            {
                cout << ch;
                if (j < i)
                ch++;
            }
            else {
                cout << --ch;
            }
        }
        cout << "\n";
    }
    return 0;
}