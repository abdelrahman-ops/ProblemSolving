#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> max_frogs_caught(n + 1, 0);

        for (int i = 0; i < n; i++) {
            if (i + a[i] <= n) {
                max_frogs_caught[i + a[i]] = max(max_frogs_caught[i + a[i]], max_frogs_caught[i] + 1);
            }
        }

        int result = *max_element(max_frogs_caught.begin(), max_frogs_caught.end());
        cout << result << endl;
    }

    return 0;
}
