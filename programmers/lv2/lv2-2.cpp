#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string arrangement) { //쇠막대기와 레이저의 배치를 표현한 문자열(100000)
    int answer = 0; //잘린 막대기 총 개수
    stack<int> pipe;

    for(int i=0;i<arrangement.length();i++)
    {
        if(arrangement[i]=='(')
        {
            pipe.push(1);
        }
        else
        {
            //첫 닫는괄호를 위한 빼기(다음 점은 레이저로 인한 가로 닫기)
            pipe.pop();

            if(arrangement[i-1]=='(') //막대기 판독기
                answer+=pipe.size();
            else //
                answer++;

        }
    }

    return answer;
}
