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
        int n, m; cin >> n >> m;
        vector<vector<int>> adj(n);
        for (int i = 0; i < m; i++) {
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int ans = 0;
        vector<int> seen(n, false);
        for (int i = 0; i < n; i++) {
            if (seen[i]) continue;
            seen[i] = true;
            ans++;
            queue<int> q;
            q.push(i);
            while (!q.empty()) {
                int u = q.front(); q.pop();
                for (int j = 0; j < (int)adj[u].size(); j++) {
                    int v = adj[u][j];
                    if (seen[v]) continue;
                    seen[v] = true;
                    q.push(v);
                }
            }
        }

        print(ans-1);
    }

	return 0;
}