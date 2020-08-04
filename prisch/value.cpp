#include<iostream>

#define five 5

using namespace std;

int main()
{
	int arr[five];
	int i,j;
	int sum=0;
	int mid,tmp;

	for(i=0;i<five;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	
	for (i = 0; i < 4; i++) 
	{ 
		mid = i; 
		
		for (j = i + 1; j < 5; j++) 
			if (arr[j] < arr[mid]) 
				mid = j; 
			tmp = arr[mid]; 
			arr[mid] = arr[i]; 
			arr[i] = tmp; 
	} 
	cout << sum / 5 << endl << arr[2];
}
