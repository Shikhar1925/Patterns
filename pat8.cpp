#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter the No. of Rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        k = 1;
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - i + 1 && j <= n + i - 1)
            {
                cout << k;
                j < n ? k++ : k--;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}