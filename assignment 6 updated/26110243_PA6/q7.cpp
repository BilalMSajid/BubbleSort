#include <iostream>
using namespace std;

void input(int array1[6], int array2[6], int array3[12])
{
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

    // assigning the unique integers of arrays into a third array
    int index = 0;

    for(int i = 0; i < 6; i++)
    {
        bool isUnique = true;
        for(int j = 0; j < 6; j++)
        {
            if(array1[i] == array2[j])
            {
                isUnique = false;
                break;
            }
        }
        if(isUnique)
        {
            array3[index++] = array1[i];
        }
    }

    for(int i = 0; i < 6; i++)
    {
        bool isUnique = true;
        for(int j = 0; j < 6; j++)
        {
            if(array2[i] == array1[j])
            {
                isUnique = false;
                break;
            }
        }
        if(isUnique)
        {
            array3[index++] = array2[i];
        }
    }

    // printing the third array
    cout<<"The unique elements are: "<<endl; 
    cout << "{";
    for (int i = 0; i < index; i++)
    {
        cout << array3[i] << " ";
    }
    cout << "}" << endl;
}

int main()
{
    int integer;
    int array1[6];
    int array2[6];
    int array3[12];

    input(array1, array2, array3);

    return 0;
}