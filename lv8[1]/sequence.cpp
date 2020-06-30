#include <iostream>

using namespace std;

int main()
{	
	int n;
	int cnt = 0;
	string word;
	cin >> n;

	for(int i=0;i<n;i++)
	{
		cin>>word;
		bool flag=true;

		for(int j=0;j<word.length();j++)
		{
			for(int k=0; k<j; k++)
			{
				if(word[j] != word[j-1] && word[j] == word[k])
				{
					flag = false;
					//break;			
				}				
			}
		}
		if(flag==true)
			cnt++;
	}

	cout<<cnt<<endl;
}
