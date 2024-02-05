
#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    bool f = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0' && s[i] != '1') {
            f = 1;
            break;
        }
    }
    if (f) {
        bool valid_bn = 1;
        if (s.size() >= 4 && s[0] == 'b' && s[1] == 'n' && s[2] == '_')
            valid_bn = 1;
        else
            valid_bn = 0;

        if (valid_bn) {
            for (int i = 3; i < s.size(); i++) {
                if ((s[i] >= 'a' && s[i] <= 'z') ||
                    (s[i] >= 'A' && s[i] <= 'Z') ||
                    (s[i] >= '0' && s[i] <= '9'))
                    valid_bn = 1;
                else {
                    valid_bn = 0;
                    break;
                }
            }
        }
        if (valid_bn)
            cout << "Binary variable = " << s << endl;
        else {
            bool valid_ch = 1;
            if (s.size() >= 4 && s[0] == 'c' && s[1] == 'h' && s[2] == '_')
                valid_ch = 1;
            else
                valid_ch = 0;

            if(valid_ch) {
                for (int i = 3; i < s.size(); i++) {
                    if ((s[i] >= 'a' && s[i] <= 'z') ||
                        (s[i] >= 'A' && s[i] <= 'Z') ||
                        (s[i] >= '0' && s[i] <= '9'))
                        valid_ch = 1;
                    else {
                        valid_ch = 0;
                        break;
                    }
                }
            }
            if (valid_ch) cout << "Character variable = " << s << endl;
            else cout << "Invalid input = " << s << endl;
        }
    } else {
        if(s[0] == '0' && s.size() >= 2)
            cout << "Binary Number = " << s << endl;
        else cout << "Invalid input = " << s << endl;
    }
}

int main() {
    freopen("6.txt","r",stdin);
    string s;
    while (cin >> s) {
        solve(s);
    }
    return 0;
}

