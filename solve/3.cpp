#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    int ans = 0;
    int cur = 0;
    auto chk = [](char c) -> bool {
        if (c == 'A') {
            return true;
        }
        if (c == 'C') {
            return true;
        }
        if (c == 'G') {
            return true;
        }
        if (c == 'T') {
            return true;
        }
        return false;
    };
    for (int i = 0; i < (int)S.size(); i++) {
        cur = max(cur, i);
        if (!chk(S[i])) {
            continue;
        }
        while (cur < (int)S.size() and chk(S[cur])) {
            cur++;
        }
        ans = max(ans, cur - i);
    }
    cout << ans << endl;
}
