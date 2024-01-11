#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    const int MOD = 1000000007;
    auto mod_pow = [&](long long a, long long n) -> long long {
        long long res = 1;
        while (n > 0) {
            if (n & 1) {
                res = res * a % MOD;
            }
            a = a * a % MOD;
            n >>= 1ll;
        }
        return res;
    };
    cout << mod_pow(m, n) << endl;
}
