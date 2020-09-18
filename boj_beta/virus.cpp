#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool visited[101];
vector<int> computer[101];
int computer_num;

void dfs(int x)
{
	visited[x]=true;
	for(int i=0; i<computer[x].size();i++)
	{
		int y=computer[x][i];
		if(!visited[y]) 
			dfs(y);			
	}
}


int main()
{
	cin>>computer_num;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int node1,node2;
		cin>>node1>>node2;

		computer[node1].push_back(node2);
		computer[node2].push_back(node1);
	}
	dfs(1);

	int ans=0;

	for(int j=2; j<computer_num; j++)
		if(visited[j]) 
			ans++;
	
	cout<<ans<<endl;
}

