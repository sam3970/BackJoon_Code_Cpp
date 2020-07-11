#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int N; //
	int C;
	cin>>N>>C;

	int hat[N+1];
	int max=-1;
	int loc=-1;
	int temp[10001];

	for(int i=1;i<=N;i++)
	{
		cin>>hat[i];
	}
	
	int M;
	cin>>M;
	int A[M+1],B[M+1];
	
	for(int i=1;i<=M;i++)
	{
		cin>>A[i]>>B[i];
	}


	for(int i=1; i<=M; i++)
	{
		for(int j=A[i];j<=B[i];j++)
		{
			temp[hat[j]]++;
		
			for(int k=1;k<=C;k++){	
			if(max < temp[k])
			{
				loc=k;
				max=temp[k];
			}
			}
			/*if(j==B[i] && max > (B[i] - A[i] + 1) / 2)
			{
				cout<<"yes "<<loc<<endl;
			}
			
			if(j==B[i] && max < (B[i] - A[i] + 1) / 2)
				cout<<"no"<<endl;*/
		}
			if(max > (B[i] - A[i] + 1) / 2)
				cout<<"yes "<<loc<<endl;
			else
				cout<<"no"<<endl;
	}
}
