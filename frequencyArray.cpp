#include <bits/stdc++.h>
using namespace std;

void countFrequency(int arr[], int size)
{
    const int MAX_VAL = 100; // Adjust this based on expected max value
    int frequencyArr[MAX_VAL + 1] = { 0 }; // Initialize frequency array

    // Count occurrences
    for (int i = 0; i < size; i++) {
        frequencyArr[arr[i]]++;
    }


    for (int i = 0; i <= MAX_VAL; i++) {
        if (frequencyArr[i] > 0) {
            cout << "   " << i << ":" << frequencyArr[i] << endl;
        }
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4,4,2,2 };
    int size = sizeof(arr) / sizeof(arr[0]);

    countFrequency(arr, size);

    return 0;
}
