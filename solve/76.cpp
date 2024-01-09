#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<long long> S(N + 1);
    for (int i = 0; i < N; i++) {
        S[i + 1] = S[i] + A[i];
    }
    for (int k = 1; k <= N; k++) {
        long long ans = 0;
        for (int i = 0; i < N - k + 1; i++) {
            ans = max(ans, S[i + k] - S[i]);
        }
        cout << ans << endl;
    }
}
