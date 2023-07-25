#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool can_sort_array(vector<int>& arr) {
    int n = arr.size();
    bool odd_present = false;
    bool even_present = false;

    for (int num : arr) {
        if (num % 2 != 0) {
            odd_present = true;
        } else {
            even_present = true;
        }
    }

    if (!odd_present || !even_present) {
        return true; // Array contains either only odd numbers or only even numbers
    }

    // Check if we can sort the array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] % 2 == arr[j] % 2) {
                if ((arr[i] % 2 == 0 && arr[i] > arr[j]) || (arr[i] % 2 != 0 && arr[i] < arr[j])) {
                    return false;
                }
            }
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << (can_sort_array(arr) ? "YES" : "NO") << endl;
    }

    return 0;
}
