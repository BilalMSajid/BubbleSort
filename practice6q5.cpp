#include <iostream>
using namespace std;

void arrayinfo(int size,int array[])
{
    cout<<"Enter the size of the array "<<endl;
    cin>>size;

    cout<<"Enter elements"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"The elements of the array are "<<endl;
    cout<<"{";
    for (int i=0;i<size;i++)
    {

        cout<<array[i];
        if(i<size-1)
        {
        cout<<",";
        }

    }
    cout<<"}";
}

void mostfrequent(int array[])
{
    int mostfrequentelement;
    int maxfrequency=0;
    int size;
    int count;

    for (int i=0;i<size;i++)
    {
        count=0;
        if (array[i]==mostfrequentelement)
            {
                continue;
            }
        for (int j=0;j<size;j++)
        {
            if (i==j)
            {
                continue;
            }
            if (array[i]==array[j])
            {
                count++;
            }


        }
        if (count>maxfrequency)
        {
            maxfrequency=count;
            mostfrequentelement=array[i];
        }
    }
    int frequencys=0;
    int mostfrequentelements[size];

    for (int i =0;i<size;i++)
    {
        count=0;
        for (int j=0;j<size;j++)
        {
            if (array[i]==array[j])
            {
                count++;
            }
            if (count==maxfrequency)
            {
                mostfrequentelements[frequencys]=array[i];
                frequencys++;
            }                                                                                                                                                                                                    
        }

    }
    for (int i=0;i<frequencys;i++)
    {
    cout<<"The most frequent element is "<<mostfrequentelements[i];
    }
}
int main ()
{
    int size=0;
    int array[size];
    

    arrayinfo(size,array);
    mostfrequent(array);

}