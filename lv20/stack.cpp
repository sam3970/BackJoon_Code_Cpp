#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
	int arr[10001];
	string discrimination;
	int top=0;
	int num;
	cin>>num;
	
	if(num>10000)
		exit(0);
	
	for(int i=0; i<num; ++i)
	{
		cin>>discrimination;

		if(discrimination == "push")
		{
			int pnum;
			cin>>pnum;
			arr[++top] = pnum;
		}
			
		else if (discrimination == "pop")
        {
            if (top == 0)
                cout << -1 << endl;
            else
                cout << arr[top--] << endl;
        }
		
        else if (discrimination == "size")
        {
            cout << top << endl;
        }
		
        else if (discrimination == "top")
        {
            if (top == 0)
                cout << -1 << endl;
            else
                cout << arr[top] << endl;
        }

		else if (discrimination == "empty")
		{
			if(top==0)
				cout<< 1 <<endl;
			else
				cout<< 0 <<endl;
		}
	}
}
