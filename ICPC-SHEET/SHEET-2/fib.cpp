#include <iostream>
using namespace std;

long long fib(int N) {
    if (N <= 0) {
        return -1; 
    } else if (N == 1) {
        return 0;
    } else if (N == 2) {
        return 1;
    } else {
        long long fib_prev = 0;
        long long fib_curr = 1;
        for (int i = 2; i < N; i++) {
            long long fib_next = fib_prev + fib_curr;
            fib_prev = fib_curr;
            fib_curr = fib_next;
        }
        return fib_curr;
    }
}

int main() {
    int N;
    cin >> N;

   cout<< fib(N) << endl;

    return 0;
}