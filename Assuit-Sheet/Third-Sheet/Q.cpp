#include <iostream>
using namespace std;

int count_non_decreasing_subarrays(int arr[], int n) {
    int count = 0;
    int subarray_count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            subarray_count++;
        } else {
            count += (subarray_count * (subarray_count + 1)) / 2;
            subarray_count = 1;
        }
    }

    count += (subarray_count * (subarray_count + 1)) / 2;
    return count;
}

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N;
        cin >> N;  // Number of elements in the array

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];  // Array elements
        }

        // Output
        cout << count_non_decreasing_subarrays(A, N) << endl;
    }

    return 0;
}
