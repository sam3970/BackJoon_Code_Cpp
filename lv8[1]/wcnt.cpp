#include<iostream>
#include<string>

using namespace std;

#define WORD 50

int main()
{
	string str;
	int wcnt=1;
	
	getline(cin,str);

	if(str[0]==' ')
	{
		wcnt=0;
	}

	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
		{
			wcnt++;
		}
	}

	if(str[str.length()-1]==' ')
	{
		wcnt--;
	}
	
	cout<<wcnt<<endl;
}
