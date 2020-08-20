#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int num;
string check_txt;
string front_txt,end_txt;

void check_pt()
{
	bool star = false;
	
	for (int i = 0; i < check_txt.size(); i++) 
	{
		if (check_txt[i] == '*') 
			star = true;
		else if (!star)
			front_txt += check_txt[i];
		else if (star)
			end_txt += check_txt[i];
	}
}

int main()
{
	cin>>num>>check_txt;

	check_pt();

	for(int i=0;i<num;i++)
	{
		string txt;
		cin>>txt;
		bool word_chk = false;
		
		for(int j=0;front_txt.size();j++)
		{
			if(txt[j] != front_txt[j])
			{
				word_chk = true;
				break;
			}
		}

	if (!word_chk) 
	{
		int end_size = txt.size() - 1;
		
		for (int j = end_txt.size() - 1; j >= 0; j--) 
		{
			if (txt[end_size] != end_txt[j] || front_txt.size() - 1 >= end_size) 
			{
				word_chk = true;
					break;
			}
             end_size--;
		}
	}
		
	if (!word_chk)
		cout << "DA\n";
	else 
		cout << "NE\n";
	}
	return 0;
}
