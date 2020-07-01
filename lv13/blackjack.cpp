#include<iostream>
#include<algorithm>

using namespace std;

int ans(int cd,int ans,int &res)
{
	int arr[50];

	for(int i=0;i<cd;i++)
		cin>>arr[i];

	for(int i=0;i<cd-2;i++)
	{
		for(int j=i+1;j<cd-1;j++)
		{
			for(int k=j+1;k<cd;k++)
			{
				if(arr[i] + arr[j] + arr[k] <= ans)
				{
					res = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}
	return res;
}

int main()
{
	int card,answer;
	int result=0;
	cin>>card>>answer;
	
	ans(card,answer,result);

	cout<<result<<endl;
}
