#include <iostream>
using namespace std;

int main()
{

    int n, prime = 0;
    cout << "enter any number : ";
    cin >> n;
    if (n < 2)
    {
        cout << "Not a prime and composite" << endl;
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime)
    {
        cout << n << " is composite ";
    }
    else
    {
        cout << n << " is prime ";
    }
}
