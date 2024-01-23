#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
    if(s.substr(0,3)=="CSE")                                  // Copy three characters of s (starting  from position 0)
        cout<<"Computer Science & Engineering, ";
    else if(s.substr(0,3)=="ICE")
        cout<<"Information & Communication Engineering, ";
         else if(s.substr(0,3)=="EEE")
        cout<<"Electrical & Electronic Engineering, ";
         else if(s.substr(0,3)=="MSE")
        cout<<"Material Science & Engineering, ";
        if(s[3]=='1')
            cout<<"1st Year, ";
          else if(s[3]=='2')
            cout<<"2nd Year, ";
           else if(s[3]=='3')
            cout<<"3rd Year, ";
           else if(s[3]=='4')
            cout<<"4th Year, ";
            if(s[4]=='1')
            cout<<"1st semester, ";
            else
                cout<<"2nd semester, ";
            if(s[5]=='1')
            cout<<"DBMS, ";
            else if(s[5]=='2')
                cout<<"Web Engineering, ";
                 else if(s[5]=='3')
                cout<<"Software Engineering, ";
                 else if(s[5]=='4')
                cout<<"Compiler Design, ";

                if(s[6]=='1')
                    cout<<"Theory";
                else
                    cout<<"Lab";


}
int main()
{

  string s;
  getline(cin,s);
  solve(s);
  return 0;
}

