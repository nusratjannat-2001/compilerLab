// CPP program to split an alphanumeric
// string using STL
#include<bits/stdc++.h>
using namespace std;

void splitString(string str)
{
	string alpha, num, other;
	for (int i=0; i<str.length(); i++)
	{
		if (isdigit(str[i]))
			num.push_back(str[i]);
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

// Driver code
int main()
{
	string str = "Md. Tarek Zaman, Part_3, 2011";
	splitString(str);
	return 0;
}

