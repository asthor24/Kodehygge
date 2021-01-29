#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << endl
#define debug(x) cerr << #x << " : " << x << endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    stack<int> a;
    for (int i = 0; i < n*2; i++) {
        int x; cin >> x;
        a.push(x);
    }

    int ans = 0;
    stack<int> b;
    while (true) {
        while (!a.empty() && !b.empty() && a.top() == b.top()) {
            a.pop();
            b.pop();
            ans++;
        }
        if (a.empty()) break;
        b.push(a.top());
        a.pop();
        ans++;
    }

    if (b.empty()) print(ans);
    else print("IMPOSSIBLE");

	return 0;
}