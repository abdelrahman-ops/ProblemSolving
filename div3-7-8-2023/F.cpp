#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

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

        unordered_map<int, int> freq, sumCount, productCount;

        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int s = arr[i] + arr[j];
                int p = arr[i] * arr[j];

                if (s == p) {
                    sumCount[s] += freq[arr[i]] - 1;
                    productCount[p] += freq[arr[i]] - 1;
                } else {
                    sumCount[s] += freq[arr[i]];
                    sumCount[s] += freq[arr[j]];

                    productCount[p] += freq[arr[i]];
                    productCount[p] += freq[arr[j]];
                }
            }
        }

        int q;
        cin >> q;

        while (q--) {
            int x, y;
            cin >> x >> y;

            int count = 0;

            if (sumCount.count(x) && productCount.count(y)) {
                count = sumCount[x] * productCount[y];
            }

            cout << count << " ";
        }

        cout << endl;
    }

    return 0;
}