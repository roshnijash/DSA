
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], i;

    // INPUT ARRAY ELEMENTS
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // DISPLAY ARRAY
    cout << "Original Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // SORT IN NON-DESCENDING ORDER (BUBBLE SORT)
    for (int j = 0; j < n; j++) {
        for (i = j + 1; i < n; i++) {
            if (arr[i] < arr[j]) {
                // Swap elements if they are in the wrong order
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // AFTER SORTING
    cout << "\nAfter Sorting: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
