#include <iostream>
using namespace std;

long long eulerPhi(long long n) {
    long long result = n;
    for (long long p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            while (n % p == 0) {
                n /= p;
            }
            result -= result / p;
        }
    }

    if (n > 1) {
        result -= result / n;
    }
    return result;
}

int main() {
    long long N;
    cin >> N;

    long long phiN = eulerPhi(N);
    cout << phiN / 2 << endl;

    return 0;
}
