#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            continue;
        }
        int cnt = 0;
        int tar = i;
        for (int ii = 1; ii <= i; ii++) {
            if (tar % ii == 0) {
                //tar /= ii;
                cnt++;
            }
            //if (tar <= ii) {
                //cnt++;
                //break;
            //}
        }
        //cout << i << ":" << cnt << endl;
        if (cnt == 8) {
            ans++;
        }
    }
    cout << ans << endl;
}
