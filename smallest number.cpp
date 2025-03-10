#include <iostream>
using namespace std;

int findSmallest(int arr[], int size) {
    int min = arr[0]; // Initialize min with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if a smaller element is found
        }
    }
    
    return min;
}

int main() {
    int arr[] = {34, 15, 88, 2, -5, 7, 99}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = findSmallest(arr, size);
    cout << "The smallest number in the array is: " << smallest << endl;

    return 0;
}
