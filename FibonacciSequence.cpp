#include <iostream>
using namespace std;

void fibonacci(int integer)
{
    int n;
    if (integer == 0)
    {
        cout << "0";
    }
    else if (integer == 1)
    {
        cout << "0,1";
    }
    else
    {
        cout << "0,1";
        int b=0;
        int c=1;

        for (int i = 2; i <= integer; i++)
        {
            n=(c+b);
            b=c;
            c=n;
            cout<<","<<c;
        }
    }
}

int main()
{
    int integer;

    cout << "enter any non negative integer" << endl;
    cin >> integer;

    if (integer < 0)
    {
        cout << "Pls enter a positive integer" << endl;
        cin >> integer;
    }

    else
    {
        fibonacci(integer);
    }
}