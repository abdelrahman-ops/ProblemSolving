#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        vector<int> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= m; j++) {
                int diff = j * k;
                if (h[i] + diff == H || h[i] - diff == H) {
                    count++;
                    break;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
