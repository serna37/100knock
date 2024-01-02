#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0 and b == 0) {
            break;
        }
        n = a;
        x = b;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int ii = i + 1; ii <= n; ii++) {
            for (int iii = ii + 1; iii <= n; iii++) {
                if (i + ii + iii == x) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}
