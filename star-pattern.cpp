#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = i;
        for (int j = 1; j <= i - j; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - i + 1; k++)
        {

            cout << a;
            a++;
        }
        cout << endl;
    }
}