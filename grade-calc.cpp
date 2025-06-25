#include <iostream>
using namespace std;

int main()
{
    int percentage;
    cout << "Enter your percentage : ";
    cin >> percentage;
    if (percentage < 0 || percentage > 100)
    {
        cout << "Not a correct input";
    }
    if (percentage >= 0 && percentage <= 40)
    {
        cout << " Your result is Fail";
    }
    else if (percentage > 40 && percentage <= 60)
    {
        cout << "You have average result";
    }
    else if (percentage > 60 && percentage <= 80)
    {
        cout << "You have good result";
    }
    else if (percentage > 80 && percentage <= 100)
    {
        cout << "You have very good result";
    }
}