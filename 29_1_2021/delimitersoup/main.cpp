#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << endl
#define debug(x) cerr << #x << " : " << x << endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string str; getline(cin, str); getline(cin, str);
    stack<char> stk;
    int ok = 1;
    for (int i = 0; i < n; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            stk.push(str[i]);
        } else if (str[i] != ' ') {
            if (!stk.empty()) {
                if (str[i] == ')' && stk.top() != '(') ok = 0;
                if (str[i] == ']' && stk.top() != '[') ok = 0;
                if (str[i] == '}' && stk.top() != '{') ok = 0;
                if (ok) stk.pop();
            } else {
                ok = 0;
            }
        }
        if (!ok) {
            print(str[i] << " " << i);
            return 0;
        }

    }

    print("ok so far");

	return 0;
}