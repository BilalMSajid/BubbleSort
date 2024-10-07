#include <iostream>
using namespace std;

void notprime(int integer)
{
    bool iscomposite;

    for (int i = 2; i <= integer; i++)
    {
        iscomposite = false;
        for (int j = 2; j < i; j++)
        {

            if (i % j == 0)
            {
                iscomposite = true;
                break;
            }
        }
        if (iscomposite)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int integer, sum;

    cout << "enter any non negative integer" << endl;
    cin >> integer;

    if (integer < 0)
    {
        cout << "Pls enter a positive integer" << endl;
        cin >> integer;
    }

    else
    {
        cout<<"Not prime numbers till "<<integer<<" are [1 ";
        notprime(integer);
        cout<<"]";
    }

    return 0;
}