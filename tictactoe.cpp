#include<iostream>

using namespace std;

char pan[4][4];

bool fin(char turn)
{
    // 가로
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (pan[i][j] != turn) 
				break;
 
            if (j == 2) 
				return true;
        }
    }
 
    // 세로
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (Map[i][j] != turn) 
				break;
 
            if (i == 2) 
				return true;
        }
    }

	//대각선(right)
	for(int i=0; i<3; i++)
	{
		if(pan[i][i] != turn)
			break;

		if(i==2)
			return true;
	}

	//대각선(left)
	for(int i=0; i<3; i++)
	{
		if(map[i][2-i] != turn)
			break;

		if(i==2)
			return true;
	}

	return false;
}

int backtracking(char turn)
{
	if fin('x' + 'o' - turn))
		return -1;

	int minval=2;

	for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (pan[i][j] == '.')
            {
                pan[i][j] = turn;
 
                minval = min(minval, backtracking('o' + 'x' - turn));
 
                pan[i][j] = '.';
            }
        }
    }
}

int main()
{

}
