#include<iostream>

using namespace std;

#define X 8
#define Y 8

int cnt = 0;

int solution()
{
	char a[X][Y];
	
	for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'F' && a[i][j]=='f') {
                if (i % 2 == 0 && j % 2 == 0) cnt++;
                else if (i % 2 == 1 && j % 2 == 1) cnt++;
            }
        }
    }
	return cnt;
}

int main()
{
	solution();

	cout<< cnt << endl;
}
