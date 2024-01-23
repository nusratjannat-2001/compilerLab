#include<bits/stdc++.h>
using namespace std;

void split(string s)
{
 string alpha,num,other;
 for(int i=0;i<s.length();i++)
 {
     if(isdigit(s[i]))
     {
         num.push_back(s[i]);
     }
   else if((str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z'))
			alpha.push_back(str[i]);
				else if(str[i]!=' ')    //space print korce na
			other.push_back(str[i]);
	}

	cout << alpha<< endl;
	cout << num << endl;
	cout << other << endl;

}

int main()
{
    string s="Md. Tarek Zaman, Part_3, 2011";
    split(str);
}

