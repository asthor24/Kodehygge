#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << endl
#define debug(x) cerr << #x << " : " << x << endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str; cin >> str;
    string ans = "";
    ans += str[0];
    for (int i = 1; i < (int)str.size(); i++) {
        if (str[i] != str[i-1]) ans += str[i];
    }
    print(ans);

	return 0;
}