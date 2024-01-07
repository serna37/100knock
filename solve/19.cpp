#include <bits/stdc++.h>
using namespace std;
int main() {
    int d, n, m;
    cin >> d >> n >> m;
    vector<int> s(n);
    s[0] = 0;
    for (int i = 1; i < n; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    vector<int> tak(m);
    for (int i = 0; i < m; i++) {
        cin >> tak[i];
    }
    vector<int> shop(2 * n);
    for (int i = 0; i < n; i++) {
        shop[i] = s[i];
    }
    for (int i = 0; i < n; i++) {
        shop[i + n] = s[i] + d;
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
        auto low = lower_bound(shop.begin(), shop.end(), tak[i]);
        int post = *low;
        low--;
        int pre = *low;
        ans += min(post - tak[i], tak[i] - pre);
    }
    cout << ans << endl;
}
