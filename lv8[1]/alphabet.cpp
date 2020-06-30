#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int alphabet[26];
	char s[101];
	cin>>s;

	for(int i=0;i<26;i++)
	{
		alphabet[i]=-1;
	}
	
	for(int i=0;i<strlen(s);i++)
	{
		if(alphabet[s[i]-97] == -1)
			alphabet[s[i]-97]=i;
	}

	for(int i=0;i<26;i++)
	{
		cout<<alphabet[i];
	}
}
