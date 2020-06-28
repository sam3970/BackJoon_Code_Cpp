#include<iostream>

using namespace std;

int arr[10001];
int selfnum(int n) 
{
	int res = n;
	if (n >= 10000) 
    { 
        res += n / 10000; 
        n %= 10000; 
    }
	if (n >= 1000) 
    { 
        res += n / 1000; 
        n %= 1000; 
    }
	if (n >= 100) 
    {
        res += n / 100; 
        n %= 100; 
    }
	if (n >= 10) 
    { 
        res += n / 10; 
        n %= 10; 
    }
	return res += n;
}
int main(void) {
	for (int i = 1; i <= 10000; i++) {
		arr[selfnum(i)] = 1;
		if (!arr[i]) 
			cout<<i<<endl;
	}
    return 0;
}
