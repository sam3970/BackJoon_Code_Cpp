#include<iostream>

#define pivot 1500000

using namespace std;

long long arr[1500001];
int limit = 1000000;

void fib()
{
	arr[0] = 0;
	arr[1] = 1;
	
	for (int i = 0; i < 1500000; i++) 
	{
		arr[i + 2] = (arr[i + 1] + arr[i]) % limit;
	}	
}

int main()
{
	long long num;
	cin>>num;

	fib();
	cout<<arr[num%pivot]<<endl;				
}
