#include<iostream>

#define DEB 0
#define BACK 0

using namespace std;

void move()
{
	// 16마리 물고기에 대해
	for (int i = 1; i <= 16; i++) 
	{
		if (location[i] >= 0) 
		{
#if DEB
			cout << "location: "<<location[i] << endl;
#endif

			int x = location[i] / 4, y = location[i] % 4;
				// 8번 move
				for (int j = 0; j < 8; j++) 
				{
					int cur_dir = (d[x][y] + j) % 8;
					int nx = x + dir[cur_dir][0], ny = y + dir[cur_dir][1];
					
					// 갈 수 없는 벽 만들기
					if (nx < 0 || nx >= 4 || ny < 0 || ny >= 4)
					continue;
					
					// 아기 상어 존재
					if (g[nx][ny] == -1)
						continue;

					// 빈 공간(Empty Space)
					if (g[nx][ny] == 0) 
					{
						location[i] = 4 * nx + ny;
						g[x][y] = 0;
						d[x][y] = -1; //trash value.
						g[nx][ny] = i;
						d[nx][ny] = cur_dir;
						break;
					}

					// 다른 물고기가 존재한다면
					if (g[nx][ny] > 0) 
					{
						location[i] = 4 * nx + ny;
						location[g[nx][ny]] = 4 * x + y;
						
						//자리 변경
						g[x][y] = g[nx][ny];
						d[x][y] = d[nx][ny];
						g[nx][ny] = i;
						d[nx][ny] = cur_dir;
						break;
					}
				}
			}
			
#if DEB
		for (int i = 0; i < 4; i++) 
		{
			for (int j = 0; j < 4; j++) 
			{
				cout << '(' << g[i][j] << ", " << d[i][j] << ")\t";
			}
			cout << "\n";
		}
		cout << "-------------------------------\n";
#endif
	}
			
}

void backtrack(int x, int y, int cnt) 
{
	// 물고기부터 옮기기
	move();
	//backtrack(int x, int y, int cnt); //recursor function (dp)
#if BACK
	cout << "----------cnt: " << cnt << "-----------\n";
	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 4; j++) 
		{
			cout << '(' << g[i][j] << ", " << d[i][j] << ")\t";
		}
		cout << "\n";
	}
	cout << "-------------------------------\n";
#endif
	
	int nx = x; 
	int ny = y;
	

	// 마지막임을 체크하는 flag
	bool flag = false;
	// max 3 move
	for (int i = 1; i <= 3; i++) {
		nx += dir[d[x][y]][0];
		ny += dir[d[x][y]][1];
		// 끝 벽
		if (nx < 0 || nx >= 4 || ny < 0 || ny >= 4)
			break;
		// 공백(빈칸)
		if (g[nx][ny] == 0)
			continue;

}


int main() 
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) 
		{
			cin >> g[i][j] >> d[i][j];
			d[i][j]--;
			location[g[i][j]] = i * 4 + j;
		}
	
	int gg = g[0][0];
	location[g[0][0]] = -1;
	g[0][0] = -1;

#if DEB
	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 4; j++) 
		{
			cout << '(' << g[i][j] << ", " << d[i][j] << ")\t";
		}
		cout << "\n";
	}
	cout << "-------------------------------\n";
	move();
#endif
}
