#include<bits/stdc++.h>
using namespace std;
set<string>keyr={"asm","double","new","switch","auto","else",
"operator","template","break","enum","private","this",
"Case","extern","protected","throw","catch","float","public",
"try","char","for","register","typedef","class","friend","return",
"union","const","goto","short","unsigned","continue","if","signed",
"virtual","default","inline","sizeof","void","delete","int","static","volatile","do","long","struct","while"};

set<string>oper={"+","-","*","/","%","++","--","<",">","<=",">=","==",
"!=","&&","||","!","&","|","<<",">>","~","^","+=","=","-=","*=","/=","%=","?"};

string prv="";
void solve(string s)
{
    if(keyr.find(s)!=keyr.end())
    {
        cout<<"Keyword = "<<s<<endl;
    }
    else if(oper.find(s)!=oper.end())
    {
        cout<<"Operator = "<<s<<endl;
    }
    else
    {
        if(prv=="#define")
        {
            cout<<"Constant = "<<s<<endl;
            cin>>s;
            cout<<"Constant value = "<<s<<endl;
        }
        else
            cout<<"Identifier = "<<s<<endl;
    }
    prv=5;
}

int main()
{
    freopen("in.txt","r",stdin);
    string s;
    while(cin>>s)
        solve(s);
    return 0;
}
