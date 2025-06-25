#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        int b = i - 1;
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << a;
            a++;
        }

        for (int m = 1; m <= i - 1; m++)
        {
            cout << b;
            b--;
        }
        for (int l = 1; l <= n - i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}