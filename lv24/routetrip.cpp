#include<iostream>

using namespace std;

typedef long long ll;
int tcnt;
ll treemt;
ll tree[1000001];

bool binary(int height)
{
    ll count=0;
    for(int i=0; i<tcnt; i++)
	{
        if(tree[i]>height)
            count+=tree[i]-height;
	}
 
    if(count>=treemt)
        return true;
    else
        return false;
}

int main()
{
	cin>>tcnt>>treemt;
	ll min=1,max=0;
	ll result=0;     

	for(int i=0; i<tcnt; i++) 
	{
        cin >> tree[i];
        
		if(max<tree[i])
            max=tree[i];
    }

	while(min<=max)
	{
		ll mid =(max+min)/2;

		if(binary(mid))
		{
			if(result<mid)
				result=mid;
			min=mid+1;
		}
		
		else
		{
			max=mid-1;
		}
	}
	cout<<result<<endl;	
}
