#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << endl
#define debug(x) cerr << #x << " : " << x << endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double r, c; cin >> r >> c;
    const double PI = 3.1415926;
    double ans = ((r-c)*(r-c)*PI)/(r*r*PI);
    cout << setprecision(6) << fixed;
    print(ans*100);

	return 0;
}