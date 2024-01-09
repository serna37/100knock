#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<set<int>> R(N);
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        R[x].insert(y);
        R[y].insert(x);
    }
    int ans = 0;
    for (int bit = 0; bit < 1 << N; bit++) {
        vector<int> tmp;
        for (int k = 0; k < N; k++) {
            if (bit & (1 << k)) {
                tmp.push_back(k);
            }
        }
        bool allma = true;
        for (int v : tmp) {
            for (int v2 : tmp) {
                if (v == v2) {
                    continue;
                }
                //allma &= binary_search(R[v].begin(), R[v].end(), v2);
                allma &= R[v].find(v2) != R[v].end();
            }
        }
        if (allma) {
            ans = max(ans, (int)tmp.size());
        }
    }
    cout << ans << endl;
}
