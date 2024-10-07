#include <iostream>
using namespace std;

int calculatesumofdigits(int integer)
{
    int sum=0;
    int num=0;

while (integer!=0)
{
    num=integer%10;
    sum=sum+num;
    integer=integer/10;
}

return sum;
}




int main ()
{
    int integer,sum;

    cout<<"enter any non negative integer"<<endl;
    cin>>integer;

    if (integer<0)
        {
            cout<<"Pls enter a positive integer"<<endl;
            cin>>integer;
        }

    else {

    cout<<"The sum of digits of n is: "<<calculatesumofdigits(integer)<<endl;
    }

    return 0;
}