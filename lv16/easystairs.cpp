#include<iostream>
using namespace std;
 
long long dp[101][11];
 
int main()
{
    int N = 0;
 
    for (int i = 1; i < 10; i++)
    {
        dp[1][i] = 1;
    }
    
    cin >> N;
 
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0)
            {
                dp[i][j] = dp[i - 1][j + 1] % 1000000000;
            }
            else{
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
            }
        }
    }
 
    long long sum = 0;
 
    for (int i = 0; i <= 9; i++)
    {
        sum += dp[N][i];
    }
    cout << sum % 1000000000;
 
    return 0;
}

