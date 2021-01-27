#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << endl
#define debug(x) cerr << #x << " : " << x << endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> abc(3);
    for (int i = 0; i < 3; i++) {
        cin >> abc[i];
    }

    sort(abc.begin(), abc.end());

    string str; cin >> str;
    for (int i = 0; i < 3; i++) {
        cout << abc[str[i]-'A'] << (i+1 == 3 ? '\n' : ' ');
    }

	return 0;
}