#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << endl
#define debug(x) cerr << #x << " : " << x << endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 1; i < n; i++) {
        if (a[i]+a[i-1] > x) {
            print(i);
            return 0;
        }
    }

    print(n);

	return 0;
}