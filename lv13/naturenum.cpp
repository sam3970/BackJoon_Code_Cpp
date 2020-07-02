#include<iostream>

using namespace std;

int main()
{
	int num;
	int sum;
	int zari;
 
	cin >> num;
 
	for (int i = 1; i < num; i++) {
		sum = i;
		zari = i;
 
		while (zari) {
			sum += zari % 10;
			zari /= 10;
		}
 
		if (num == sum) {
			cout << i << endl;
		}
	}
 
	cout << "0" << endl;
}	
