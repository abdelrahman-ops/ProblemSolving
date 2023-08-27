#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[MAX_N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++) {
            int max_num = A[i];
            for (int j = i; j < N; j++) {
                max_num = max(max_num, A[j]);
                cout << max_num << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
