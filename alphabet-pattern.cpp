#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows : ";
    cin >> row;
    // D
    // C D
    // B C D
    // A B C D
    for (int i = 1; i <= row; i++)
    {
        char ch = 'D';

        for (int j = 1; j <= i; j++)
        {

            cout << char(ch - i + 1) << " ";
            ch++;
        }

        cout << endl;
    }
}