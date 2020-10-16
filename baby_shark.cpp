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
