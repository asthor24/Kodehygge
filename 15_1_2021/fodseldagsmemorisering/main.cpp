#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << endl
#define debug(x) cerr << #x << " : " << x << endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<tuple<string, tuple<int, string>>> a;
    for (int i = 0; i < n; i++) {
        string name; cin >> name;
        int x; cin >> x;
        string date; cin >> date;
        int found = 0;
        for (int j = 0; j < (int)a.size() && !found; j++) {
            if (get<0>(a[j]) == date) {
                if (get<0>(get<1>(a[j])) < x) {
                    get<0>(get<1>(a[j])) = x;
                    get<1>(get<1>(a[j])) = name;
                }
                found = 1;
            }
        }
        if (!found) {
            a.push_back(make_tuple(date, make_tuple(x, name)));
        }
    }

    sort(a.begin(), a.end(), [] (tuple<string, tuple<int, string>> r, tuple<string, tuple<int, string>> l) {
        return get<1>(get<1>(r)) < get<1>(get<1>(l));
    });

    print((int)a.size());
    for (int i = 0; i < (int)a.size(); i++) {
        print(get<1>(get<1>(a[i])));
    }

	return 0;
}