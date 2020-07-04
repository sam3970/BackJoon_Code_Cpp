#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec(1001);
	int num;
	cin>>num;
	
	for(int i=1; i<=num;i++)
	{
		cin>>vec[i];
	}

	sort(vec.begin(),vec.end());
	
	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	vec.resize(distance(vec.begin(),unique(vec.begin(), vec.end())));

	sort(vec.begin(),vec.end());

	for(int s=1;s<vec.size();s++)
	{
		cout<<vec[s]<<endl;
	}
}
