#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    string S;
    cin >> N >> S;
    int ans = 0;
    for (int i = 0; i <= 999; i++) {
        string s = to_string(i);
        while (s.size() < 3) {
            s = "0" + s;
        }
        int cur = 0;
        for (int ii = 0; ii < N; ii++) {
            if (cur == 3) {
                break;
            }
            if (S[ii] == s[cur]) {
                cur++;
            }
        }
        if (cur == 3) {
            ans++;
        }
    }
    cout << ans << endl;
}
