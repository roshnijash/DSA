#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // elements as visited
    bool visited[n] = {false};

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int count = 1; // Reset count for each element
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = true; 
                  // Mark as visited
                }
            }
            cout << arr[i] << " occurs " << count << " times\n";
        }
    }

    return 0;
}
