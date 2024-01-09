#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> f(n + 1);
    f[0] = 1;
    f[1] = 1;
    for (int i = 1; i < n; i++) {
        f[i + 1] = f[i] + f[i - 1];
    }
    cout << f[n] << endl;
}
