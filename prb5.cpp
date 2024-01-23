
#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    bool f = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i]) == 0 && s[i] != '.') {
            f = 1;
            break;
        }
    }
    if (f) {
        bool valid = 1;
        for (int i = 0; i < s.size(); i++) {
            if (i == 0 &&
                ((s[i] >= 'a' && s[i] <= 'h') || (s[i] >= 'A' && s[i] <= 'H') ||
                 (s[i] >= 'o' && s[i] <= 'z') ||
                 (s[i] >= 'O' && s[i] <= 'Z'))) {
                valid = 1;
            } else if (i != 0 && (s[i] >= 'a' && s[i] <= 'z') ||
                       (s[i] >= 'A' && s[i] <= 'Z') ||
                       (s[i] >= '0' && s[i] <= '9'))
                valid = 1;
            else {
                valid = 0;
                break;
            }
        }
        if (valid)
            cout << "Float variable = " << s << endl;
        else
            cout << "Invalid Input = " << s << endl;
    } else {
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '.') break;

            cnt++;
        }

        int cnt2 = 0;
        for (int i = cnt + 1; i < s.size(); i++) {
            cnt2++;
        }
        if (cnt2 >= 3)
            cout << "Double Number = " << s << endl;
        else
            cout << "Float Number = " << s << endl;
    }
}

int main() {
    string s;
    while (cin >> s) {
        solve(s);
    }
    return 0;
}
