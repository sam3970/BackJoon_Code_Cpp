#include<iostream>
#include<queue>
#include<algorithm>

#define MAX_VALUE 1001

using namespace std;
            
int N, M, V;                    
int matrix[MAX_VALUE][MAX_VALUE];    //인접행렬 배열 선언
int visit[MAX_VALUE];            //visit 배열 default value is zero.

void dfs(int val)
{
	cout<<val<<" ";
	visit[val]=1;
	
	for(int i=1;i<=N;i++)
	{
		if(visit[i]==1 || matrix[val][i]==0)
			continue;
		dfs(i);
	}
}

void bfs(int val)
{
	queue<int> que;
	que.push(val);
	visit[val]=0; //dfs 에서 1을 사용 했으므로 1에서 0으로 수정

	while(!que.empty())
	{
		val=que.front();
		cout<<que.front()<<" ";
		que.pop();

		for(int i=1; i<=N; i++)
		{
            if(visit[i] == 0 || matrix[val][i] == 0)
                continue;
            que.push(i);
            visit[i] = 0;
		}
	}
}

int main() 
{
    int x, y;
    cin >> N >> M >> V;            //N은 노드개수, M은 간선의개수, V는 처음 위치의 기준이 되는 노드
    for(int i=0; i<M; i++) 
	{    
		//간선의 개수만큼 서로 이어줄 x와 y입력.
        cin >> x >> y;            
        matrix[x][y] = matrix[y][x] = 1;    //인접행렬 표시
    }
    dfs(V);            
    cout << '\n';
    bfs(V);
    cout << '\n';
    return 0;
}

