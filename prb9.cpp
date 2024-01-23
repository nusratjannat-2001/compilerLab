#include<bits/stdc++.h>
using namespace std;
void solve(int ct) {
    string s;
    getline(cin, s);
    set<string>sub = {"Sagor", "Selim", "Salma", "Nipu", "He", "She", "I", "We", "You", "They"};
    set<string>pred1 = {"read", "eat", "take", "run", "write"};
    set<string>pred2 = {"book", "cow", "dog", "home", "grass", "rice", "mango"};
    istringstream iss(s);
    vector<string> inp{istream_iterator<string>{iss}, istream_iterator<string>{}};
    // dbg(inp);
    int n = inp.size();
    if(n > 3 || n < 2) {
        cout << "Invalid Sentence" << endl;
        return;
    }
    else{
        if(sub.find(inp[0]) == sub.end()) {
            cout << "Invalid Sentence" << endl;
            return;
        }
        if(pred1.find(inp[1]) == pred1.end()) {
            cout << "Invalid Sentence" << endl;
            return;
        }
        if(n == 3 && pred2.find(inp[2]) == pred2.end()) {
            cout << "Invalid Sentence" << endl;
            return;
        }
        cout << "Valid Sentence" << endl;
    }
}
int main()
{
    int ct;
    solve(ct);
}
