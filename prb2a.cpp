#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Munmun is the student of Computer Science & Engineering";
     int vowel=0,consonant=0;
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i]))        //function only for alphabetic
        {
              if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||     // condition for vowel
               s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                vowel++;
            else
                consonant++;
        }
        }
    cout<<"Count of vowels: "<<vowel<<endl;
    cout<<"Count of consonant: "<<consonant<<endl;
}


