#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    bool f = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i]) == 0){
            f = 1;
            break;
        }
    }
    if(f){
        bool valid = 1;
        for(int i =0; i < s.size(); i++){
            if(i == 0 && (s[i] >= 'i' && s[i] <= 'n') || (s[i] >= 'I' && s[i] <= 'N')){
                valid = 1;
            }
            else if(i != 0 && (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
            valid = 1;
            else {
                valid = 0;
                break;
            }
        }
        if(valid) cout << "Integer-variable = " << s << endl;
        else cout << "Invalid Input = " << s << endl;
    }
    else{
        if(s.size() >= 5) cout << "LongInt = " << s << endl;
        else  cout << "ShortInt = " << s << endl;
    }
}
int main() {
    string s;
    while (cin >> s) {
        solve(s);
    }
    return 0;
}
