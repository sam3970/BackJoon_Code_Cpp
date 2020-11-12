#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cstdio>
#include <math.h>
#include <algorithm>
#include <map>

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
            if (pan[i][j] != turn) 
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
		if(pan[i][2-i] != turn)
			break;

		if(i==2)
			return true;
	}

	return false;
}

int backtracking(char turn)
{
	if(fin('x' + 'o' - turn))
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
	
	if (minval == 2 || minval == 0) 
		return 0;
 
    return -minval;
}

int main()
{
	//val 값에 따라 누구의 말인지 판별 가능.
	int val=0 ,count=0;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>val;
 
            if (val == 0) 
				pan[i][j] = '.';
            
			else if (val == 1) 
				pan[i][j] = 'x';
            
			else if (val == 2) 
				pan[i][j] = 'o';
 
            if (val != 0) 
				++count; //만족하는 조건이 없으면 다음 차례를 위해 count 증가.
		}
    }
 
    char start = 'x'; //선턴 지정
 
    if (count % 2 != 0) 
		start = 'o';
 
    switch (backtracking(start))
    {
        case -1: 
			cout<<"L"<<endl;
            break;
 
        case 0: 
			cout<<"D"<<endl;
            break;
 
        case 1: 
			cout<<"W"<<endl;
            break;
 
        default:
			cout<<"blank"<<endl;
            break;
    }

	//fin()
	//return;
}
