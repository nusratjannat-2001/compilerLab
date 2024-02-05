#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Munmun is the student of Computer Science & Engineering";
    string vowel,consonant;
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i]))        //function only for alphabetic
        {
              if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||     // condition for vowel
               s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                vowel.push_back(s[i]);
              else
                consonant.push_back(s[i]);
        }
    }

    cout<<vowel<<endl;
     cout<<consonant<<endl;
}
