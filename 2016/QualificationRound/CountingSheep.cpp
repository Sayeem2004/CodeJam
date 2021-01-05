#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 t; cin >> t;
    for (int64 tt = 1; tt <= t; tt++) {
        int64 n; cin >> n;
        if (n == 0) {
            cout << "Case #" << tt << ": ";
            cout << "INSOMNIA" << "\n";
        } else {
            set<char> s;
            int64 i = 1;
            for (; i < 1e3; i++) {
                string r = to_string(i*n);
                for (auto x : r)
                    s.insert(x);
                if (s.size() == 10) break;
            }
            cout << "Case #" << tt << ": ";
            cout << i*n << "\n";
        }
    }
}
