#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int main() {
    long long m, n;
    cin >> m >> n;
    auto modpow = [](long long a, long long n, long long mod) -> long long {
        long long res = 1;
        while (n > 0) {
            if (n & 1) {
                res = res * a % mod;
            }
            a = a * a % mod;
            n >>= 1;
        }
        return res;
    };
    long long ans = modpow(m, n, MOD);
    cout << ans << endl;
}
