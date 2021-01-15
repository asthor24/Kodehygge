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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int k = a[0]-a[1], stop = 0;
        for (int i = 2; i < n && !stop; i++) {
            if (a[i-1]-a[i] != k) {
                stop = 1;
            }
        }

        if (!stop) {
            print("arithmetic");
            continue;
        }

        sort(a.begin(), a.end());

        k = a[0]-a[1];
        stop = 0;
        for (int i = 2; i < n && !stop; i++) {
            if (a[i-1]-a[i] != k) {
                stop = 1;
            }
        }

        if (stop) {
            print("non-arithmetic");
            continue;
        } else {
            print("permuted arithmetic");
        }
    }

	return 0;
}