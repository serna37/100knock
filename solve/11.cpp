#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<set<int>> d(M);
    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        for (int ii = 0; ii < k; ii++) {
            int t;
            cin >> t;
            d[i].insert(t);
        }
    }
    vector<int> p(M);
    for (int i = 0; i < M; i++) {
        cin >> p[i];
    }
    int ans = 0;
    for (int bit = 0; bit < 1 << N; bit++) {
        vector<int> cnt(M, 0);
        for (int i = 0; i < N; i++) {
            if (bit & (1 << i)) {
                for (int ii = 0; ii < M; ii++) {
                    auto itr = d[ii].lower_bound(i + 1);
                    if (itr != d[ii].end() and *itr == i + 1) {
                        cnt[ii]++;
                    }
                }
            }
        }
        bool allma = true;
        for (int i = 0; i < M; i++) {
            allma &= p[i] == cnt[i] % 2;
        }
        if (allma) {
            ans++;
        }
    }
    cout << ans << endl;
}
