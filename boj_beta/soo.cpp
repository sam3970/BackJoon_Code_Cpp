#include<iostream>

using namespace std;

int cal(int max, int min)
{
	int tmp;
	while (min != 0)
	{
		tmp = max % min;
		max = min;
		min = tmp;
	}
	return max;
}


int main()
{
	int max,min;

	cin>>max>>min;

	cal(max,min);
	
	cout << cal(max, min) << endl; 
	cout << (max*min)/cal(max, min) << endl;
}
