#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>

using namespace std;

int reverse(int n1,int n2)
{
	string s1 = to_string(n1);
	string s2 = to_string(n2);

	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());

	return atoi(s1.c_str()),atoi(s2.c_str());
}

int main()
{
	int num1,num2;
	cin>>num1>>num2;
	reverse(num1,num2);

	max(num1,num2);
	if(num1>num2)
		cout<<num1<<endl;
	else
		cout<<num2<<endl;
}
