#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of Rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char k = 'A';
        for (char j = -(n - 1); j <= (n - 1); j++)
        {
            if (j <= -(i - 1) || j >= i - 1)
            {
                cout << (char)(n - 1 - (j > 0 ? j : -j) + 'A');
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
