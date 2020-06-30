#include<iostream>
#include<string>

using namespace std;

int main()
{
	int arr[27];
	string alph;
	cin>>alph;
	for(int i=0;i<alph.length();i++)
	{
		if(alph[i]>=97)
		{
			alph[i]=alph[i]-32;
		}
		arr[alph[i]-65]++;
	}

	int max=0;
	int idx,cnt=0;

	for(int i=0; i<26; i++)
	{
		if(max < alph[i]) 
		{
			max = alph[i];
			idx = i;	
		}
	}

	for(int i=0; i<26; i++){
		if(i != idx) {
			if(max == alph[i]) cnt++;	
		}
	}
	
	if(cnt != 0){
		cout << "?\n";
	} else {
		cout << (char)(idx+65) << "\n";	
	}
	
}

