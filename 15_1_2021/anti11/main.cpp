#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << endl
#define debug(x) cerr << #x << " : " << x << endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int mod = 1e9+7;
        vector<int64_t> a = {1, 2};
        for (int i = 2; i <= n; i++) {
            a.push_back((a[i-1]+a[i-2])%mod);
        }

        print(a[n]);
    }

	return 0;
}