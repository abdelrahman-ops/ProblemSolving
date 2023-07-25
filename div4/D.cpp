#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());  // sort the difficulties in ascending order
        int ans = n;  // initialize the answer with the number of problems
        for (int i = 0; i < n; i++) {
            int j = upper_bound(a.begin(), a.end(), a[i] + k) - a.begin() - 1;
            int cnt = j - i;  // number of problems to remove
            ans = min(ans, n - cnt);  // update the answer
        }
        cout << ans << endl;
    }
    return 0;
}