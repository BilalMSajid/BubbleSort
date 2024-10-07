#include <iostream>
using namespace std;

int calculatefactorial(int integer,int& factorial)

{
    factorial=1;

    if (integer==0)
    {
        factorial=1;
    }
    else if (integer==1)
    {
        factorial=1;
    }
    
    else{

    // int i=0;
    while (integer!=1)
    {
        factorial=factorial*(integer);
        integer--;
    }
    }

    return factorial;
}




int main ()
{
    int integer;
    int factorial;

    cout<<"Enter a non negative integer"<<endl;
    cin>>integer;

    if (integer<0)
        {
            cout<<"Pls enter a positive integer"<<endl;
            cin>>integer;
        }

    else {

    cout<<"The factorial of n is result. "<<calculatefactorial(integer,factorial)<<endl;
    }

    return 0;

}