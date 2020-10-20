#include<iostream>

#define DEB 0
#define BACK 0

using namespace std;

void move()
{
	// 16마리 물고기에 대해
	for (int i = 1; i <= 16; i++) {
		if (location[i] >= 0) {
#if DEB
			cout << "location: "<<location[i] << endl;
#endif

	int x = location[i] / 4, y = location[i] % 4;
			// 8번 move
		for (int j = 0; j < 8; j++) {
			int cur_dir = (d[x][y] + j) % 8;
			int nx = x + dir[cur_dir][0], ny = y + dir[cur_dir][1];
			// 갈 수 없는 벽 만들기
			if (nx < 0 || nx >= 4 || ny < 0 || ny >= 4)
				continue;
			// 상어 존재
			if (g[nx][ny] == -1)
				continue;

			// 빈 공간(Empty Space)
			if (g[nx][ny] == 0) 
			{
				location[i] = 4 * nx + ny;
				g[x][y] = 0;
				d[x][y] = -1; //쓰레기값임. 어차피 의미 없음.
				g[nx][ny] = i;
				d[nx][ny] = cur_dir;
				break;
			}
}

int main() {
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {
			cin >> g[i][j] >> d[i][j];
			d[i][j]--;
			location[g[i][j]] = i * 4 + j;
		}
	int gg = g[0][0];
	location[g[0][0]] = -1;
	g[0][0] = -1;

#if DEB
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << '(' << g[i][j] << ", " << d[i][j] << ")\t";
		}
		cout << "\n";
	}
	cout << "-------------------------------\n";
	move();
