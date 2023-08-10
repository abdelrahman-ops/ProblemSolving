#include <iostream>
#include <vector>

using namespace std;

bool is_possible_to_color(const vector<int>& arr) {
    int total_sum = 0;

    for (int num : arr) {
        total_sum += num;
    }

    return total_sum % 2 == 0;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        if (is_possible_to_color(arr)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
