#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << endl
#define debug(x) cerr << #x << " : " << x << endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b, br, bs, a, as; cin >> b >> br >> bs >> a >> as;
    print((((br-b)*bs)/as+a)+1);

	return 0;
}