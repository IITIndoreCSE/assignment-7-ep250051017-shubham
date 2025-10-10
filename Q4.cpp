/* Write a function that finds that first element that repeats itself in an array. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in array: ";
    if (!(cin >> n) || n <= 0) return 0;

    int a[n];
    cout << "Enter " << n << " elements: "<<endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bool found = false;
    for (int i = 0; i < n && !found;i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                cout << "The first repeating element is: " << a[i] << '\n';
                found = true;
                break;
            }
        }
    }
    if (!found) cout << "No repeating elements found in the array.";

   
    return 0;
}
