#include<iostream>

#define pivot 1500000

using namespace std;

/* notice : 1,000,000으로 나눈 fibonacci numbers의 반복되는 주기는 1,500,000 */

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
