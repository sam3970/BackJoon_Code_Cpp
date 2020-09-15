#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100001;
int arr[MAX];

void solution(int num, int low, int high)
{
	int mid = (low+high)/2;

	if(low > high)
	{
		cout<<0<<endl;
		return;
	}

	if (arr[mid] == num) {
		cout<<1<<endl;
		return;
	}
	
	//Dynamic Programming 이용 시 좀 더 빠르게 탐색가능.	
	else if (arr[mid] > num) 
	{
		solution(num, low, mid - 1);
	}
	
	else if (arr[mid] < num)
	{
		solution(num, mid + 1, high);
	}

}

int main()
{
	int n;
	int m;
	int find;

	cin>>n;

	for(int i=1; i<=n; i++)
		cin>>arr[i]; //배열에 저장

	sort(arr,arr+(n+1));
	cin>>m;

	for(int i=1; i<=m; i++)
	{
		cin>>find;
		solution(find, 1, n);
	}
}

