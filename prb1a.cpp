#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Md. Tarek Zaman, Part_3, 2011";
    int words=0,letter=0,digit=0,other=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
            words++;
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            letter++;
        else if(s[i]>='0'&&s[i]<='9')
             digit++;
        else if(s[i]!=' ')     //space nicci na
            other++;

    }
    words=words+1;
    cout<<"num of words : "<<words<<endl;
    cout<<"num of letter : "<<letter<<endl;
    cout<<"num of digit : "<<digit<<endl;
    cout<<"num of other : "<<other<<endl;


}
