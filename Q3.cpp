/* Write a function that takes an array an a parameter and modifies every element by multiplying it with the current values of elements before and after it. The element before the first element is considered to be a 1; 
  similarly the element after the last element is also considered a 1. The first is first multiplied, the second element is subsequently multiplied by the new value of the first element and the third element, and so on. */

#include <iostream>
using namespace std;

void modifyArray(int arr[], int size) {
    int prev = 1, curr;
    for (int i = 0; i < size; i++) {
        curr = arr[i];
        if (i == size - 1) {
            arr[i] *= prev;
        } else {
            arr[i] *= prev * arr[i + 1];
        }
        prev = curr;
    }
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    modifyArray(arr, size);
    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

