#include <iostream>
using namespace std;

void bubblesort1(int size1,int array1[])
{
    bool swapped;
    
    for (int i = 1; i < size1; i++)
    {
        swapped = false;
        if (array1[i] < array1[i - 1])
        {
            int temp = array1[i - 1];
                array1[i - 1] = array1[i];
                array1[i] = temp;
            swapped=true;
        }
    }

}
void bubblesort2(int size2,int array2[])
{
    bool swapped;
    
    for (int i = 1; i < size2; i++)
    {
        swapped = false;
        if (array2[i] < array2[i - 1])
        {
            int temp = array2[i - 1];
                array2[i - 1] = array2[i];
                array2[i] = temp;
            swapped=true;
        }
    }

}

int main ()
{
    int size1;
    int size2;

    cout<<"enter size for array1"<<endl;
    cin >>size1;
    cout<<"enter size for array1"<<endl;
    cin >>size2;

    int array1[size1];
    int array2[size2];

    // taking input for array1 and displaying

    cout << "The elements in array1 are " << endl;
    
    for (int i = 0; i < 6; i++)
    {
        cin >> array1[i];
    }
    cout << "{";
    for (int i = 0; i < 6; i++)
    {
        cout << array1[i] << " ";
    }
    cout << "}" << endl;

    // taking input for array2 and displaying

    cout << "The elements in array2 are " << endl;

    for (int i = 0; i < 6; i++)
    {
        cin >> array2[i];
    }
    cout << "{";
    for (int i = 0; i < 6; i++)
    {
        cout << array2[i] << " ";
    }
    cout << "}" << endl;

    bubblesort1(size1,array1);
    bubblesort2(size2,array1);

    

}