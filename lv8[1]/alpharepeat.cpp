#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name;
	int main_cnt,rep;
	cin>>main_cnt;
	
	for(int i=0;i<main_cnt;i++)
	{	
		cin>>rep>>name;
		for(int j=0;j<name.length();j++)
		{
			for(int k=0;k<rep;k++)
			{
				cout<<name[j];
			}
		}
		cout<<"\n";
	}
}
