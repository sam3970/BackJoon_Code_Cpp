#include<iostream>

using namespace std;

bool han(int paranum)
{
	if(paranum<100)
		return true;

	int hund,teens,ones;
	hund = paranum/100;
	teens = (paranum%100)/10;
	ones = paranum%10;
	
	if(hund-teens == teens-ones)
		return true;
	else
		return false;
}

int main()
{
	int num,cnt=0;
	cin>>num;
	
	for(int i=1;i<=num;i++)
	{
		if(han(i))
			cnt++;
	}
	cout<<cnt;
}
