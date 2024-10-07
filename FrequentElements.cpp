#include <iostream>
using namespace std;


void sort(int frequentelements[], int frequentcount) {
    cout << "Most frequent occurring elements: ";
    if (frequentcount > 0) {
        for (int i = 0; i < frequentcount; i++) {
            cout << frequentelements[i] << ",";
        }
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int frequency;
    int maxfrequency = 0;
    int mostfrequentelement;

    
    for (int i = 0; i < size; i++) {
        frequency = 0;
        for (int j = 0; j < size; j++) {
            if (array[j] == array[i]) {
                frequency++;
            }
        }
        if (frequency > maxfrequency) {
            maxfrequency = frequency;
            mostfrequentelement = array[i];
        }
    }

    
    int frequentelements[size];
    int frequentcount = 0;
    for (int i = 0; i < size; i++) {
        frequency = 0;
        for (int j = 0; j < size; j++) {
            if (array[j] == array[i]) {
                frequency++;
            }
        }
        if (frequency == maxfrequency && array[i] != mostfrequentelement) {
            frequentelements[frequentcount++] = array[i];
        }
    }

    
    sort(frequentelements, frequentcount);

    return 0;
}
