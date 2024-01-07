#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> Q[i];
    }
    vector<int> n(N);
    for (int i = 0; i < N; i++) {
        n[i] = i + 1;
    }
    int a = 0, b = 0, cnt = 0;
    do {
        cnt++;
        if (n == P) {
            a = cnt;
        }
        if (n == Q) {
            b = cnt;
        }
    } while (next_permutation(n.begin(), n.end()));
    cout << abs(b - a) << endl;
}
