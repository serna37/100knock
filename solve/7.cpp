#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> P(n);
    set<pair<int, int>> st;
    for (int i = 0; i < n; i++) {
        cin >> P[i].first >> P[i].second;
        st.insert(P[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int ii = i + 1; ii < n; ii++) {
            int x1 = P[i].first, y1 = P[i].second;
            int x2 = P[ii].first, y2 = P[ii].second;
            int dx = x2 - x1, dy = y1 - y2;
            int x3 = x1 + dy, y3 = y1 + dx;
            int x4 = x2 + dy, y4 = y2 + dx;
            if (st.count({x3, y3}) and st.count({x4, y4})) {
                ans = max(ans, dx * dx + dy * dy);
            }
        }
    }
    cout << ans << endl;
}
