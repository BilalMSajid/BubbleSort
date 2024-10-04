#include <iostream>
using namespace std;

void bubblesort(int size,int arr[])
{
    bool swapped;
    
    for (int i = 1; i < size; i++)
    {
        swapped = false;
        if (arr[i] < arr[i - 1])
        {
            int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            swapped=true;
        }
    }



}

int main()
{
    int size;

    cout << "Enter size of array " << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bubblesort(size, arr);

    
    cout<<"The sorted array is: "<<endl;
    cout<<"{";
    for (int i=0;i<size;i++)
    {
        cout<<arr[i];
        cout<<",";
    }
    cout<<"}";



}
