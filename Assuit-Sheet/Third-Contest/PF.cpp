#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of elements

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];  // Read the array elements
    }

    vector<int> result;
    while (!arr.empty()) {
        if (arr.size() % 2 == 1) {
            result.push_back(arr[0]);  // Remove and append the first element
            arr.erase(arr.begin());
        } else {
            result.push_back(arr.back());  // Remove and append the last element
            arr.pop_back();
        }
    }

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
