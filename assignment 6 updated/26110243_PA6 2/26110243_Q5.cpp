#include <iostream>
using namespace std;

void sort(int frequentelements[], int frequentcount)
{
    // remove duplicates
    for (int i = 0; i < frequentcount; i++)
    {
        for (int j = i + 1; j < frequentcount; j++)
        {
            if (frequentelements[i] == frequentelements[j])
            {
                for (int k = j; k < frequentcount; k++)
                {
                    frequentelements[k] = frequentelements[k + 1];
                }
                frequentcount--;
                j--;
            }
        }
    }

    // sort
    for (int i = 0; i < frequentcount; i++)
    {
        for (int j = i + 1; j < frequentcount; j++)
        {
            if (frequentelements[i] > frequentelements[j])
            {
                int temp = frequentelements[i];
                frequentelements[i] = frequentelements[j];
                frequentelements[j] = temp;
            }
        }
    }

    cout << "Most frequent element(s): ";
    for (int i = 0; i < frequentcount; i++)
    {
        cout << frequentelements[i] << " ";
    }
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int frequency;
    int maxfrequency = 0;
    int mostfrequentelement;

    for (int i = 0; i < size; i++)
    {
        frequency = 0;
        for (int j = 0; j < size; j++)
        {
            if (array[j] == array[i])
            {
                frequency++;
            }
        }
        if (frequency > maxfrequency)
        {
            maxfrequency = frequency;
            mostfrequentelement = array[i];
        }
    }

    int frequentelements[size];
    int frequentcount = 0;

    for (int i = 0; i < size; i++)
    {
        frequency = 0;
        for (int j = 0; j < size; j++)
        {
            if (array[j] == array[i])
            {
                frequency++;
            }
        }
        if (frequency == maxfrequency)
        {
            frequentelements[frequentcount] = array[i];
            frequentcount++;
        }
    }

    sort(frequentelements, frequentcount);

    return 0;
}