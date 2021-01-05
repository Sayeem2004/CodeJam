#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 t; cin >> t;
    for (int64 tt = 1; tt <= t; tt++) {
        int64 n; cin >> n;
        string s(2*n-2,'A');
        for (int64 i = 0; i < 2*n-2; i++) {
            char x; cin >> x;
            if (x == 'E') s[i] = 'S';
            else s[i] = 'E';
        }
        cout << "Case #" << tt << ": ";
        cout << s << "\n";
    }
}
