#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string s) {
    int n = s.size();
    int i = 0;
    string a = "";
    vector<string> vowel, conso;
    while (i < n) {

          if (s[i] == ' ') {
            if (a[0] == 'a' || a[0] == 'e' || a[0] == 'i' || a[0] == 'o' ||
                a[0] == 'u' || a[0] == 'A' || a[0] == 'E' || a[0] == 'I' ||
                a[0] == 'O' || a[0] == 'U') {
                vowel.push_back(a);
            } else {
                conso.push_back(a);
            }
            a = "";
        }

         else {
            a.push_back(s[i]);
        }
        i++;
    }
   if (a[0] == 'a' || a[0] == 'e' || a[0] == 'i' || a[0] == 'o' ||
        a[0] == 'u' || a[0] == 'A' || a[0] == 'E' || a[0] == 'I' ||
        a[0] == 'O' || a[0] == 'U') {
        vowel.push_back(a);
    } else {
        conso.push_back(a);
    }
    cout << "Starting with vowel: " << endl;
    for (auto x : vowel) cout << x << endl;
    cout << "Starting with consonant: " << endl;
    for (auto x : conso) cout << x << endl;
}
int main() {
    string s;
    getline(cin, s);
    solve(s);
    return 0;
}
