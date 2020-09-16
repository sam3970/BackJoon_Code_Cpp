#include <iostream>
#include <string>
#include <queue>

using namespace std;

int solution(string dirs) {
    int answer = 0;
    int x=5;
    int y=5; //음수가 아닌 0부터 시작하는 것으로 구현했으므로 5,5 부터 시작
    // 점은 최대 10개까지 찍어야 하므로 overflow 방지를 위해 11로 할당(전x,y && 후x,y)
    int visit[11][11][11][11];  

    for(int i=0;i<dirs.length();i++)
    {
        if(dirs[i]=='U' || dirs[i]=='u')
        {
            if(y<10)
            {
                if(visit[x][y][x][y+1] !=1)
                {
                    visit[x][y][x][y+1]=1;
                    visit[x][y+1][x][y]=1;
                    answer++;
                }
                y++;
            }
        }

        else if(dirs[i]=='D' || dirs[i]=='d')
        {
            if(y>0)
            {
                if(visit[x][y][x][y-1] !=1)
                {
                    visit[x][y][x][y-1]=1;
                    visit[x][y-1][x][y]=1;
                    answer++;
                }
                y--;
            }
        }

        else if(dirs[i]=='L' || dirs[i]=='l')
        {
            if(x>0)
            {
                if(visit[x][y][x-1][y] !=1)
                {
                    visit[x][y][x-1][y]=1;
                    visit[x-1][y][x][y]=1;
                    answer++;
                }
                x--;
            }
        }

        else if(dirs[i]=='R' || dirs[i]=='r')
        {
            if(x<10)
            {
                if(visit[x][y][x+1][y] !=1)
                {
                    visit[x][y][x+1][y]=1;
                    visit[x+1][y][x][y]=1;
                    answer++;
                }
                x++;
            }
        }
    }
    return answer;
}
