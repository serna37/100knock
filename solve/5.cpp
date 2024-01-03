#include <bits/stdc++.h>
using namespace std;
const long long INF = 1001001001001001001ll;
int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    long long ans = INF;
    for (int i = 0; i <= max(2 * X, 2 * Y); i += 2) {
        long long a = (X - i / 2) * A;
        long long b = (Y - i / 2) * B;
        if (a < 0) {
            a = 0;
        }
        if (b < 0) {
            b = 0;
        }
        ans = min(ans, (long long)(i * C + a + b));
    }
    cout << ans << endl;
}
