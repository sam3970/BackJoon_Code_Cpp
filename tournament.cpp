#include<iostream>

using namespace std;

int main()
{
	int N,jimin,hansoo,count=0;

	cin>>N>>jimin>>hansoo;
	
	/*if(N > jimin || N > hansoo || jimin <= 0 || hansoo <= 0)
	{
		cout<<"범위 벗어남"<<endl;
	}*/
	
	while(jimin != hansoo)
	{
		jimin = jimin-jimin/2;
		hansoo = hansoo-hansoo/2;

		count+=1;
	}

	cout<<count<<endl;
}
