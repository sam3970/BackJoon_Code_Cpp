#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{	
	int dotnum=0;
	cin>>dotnum;
	vector <pair<int, int> > vec(dotnum);

	for(int i=0;i<dotnum;i++)
	{
		cin>>vec[i].first>>vec[i].second;
	}

	sort(vec.begin(), vec.end());
	
	for(int i=0;i<dotnum;i++)
	{
		cout<<vec[i].first<<" "<<vec[i].second<<endl;
	}
	
}
