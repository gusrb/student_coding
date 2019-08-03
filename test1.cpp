#include <iostream>    
#include <algorithm>
using namespace std;	
int main()
{
	int  n,a[20];
	cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	} 
	sort(a, a + n); 
	if (n % 2 == 0)
	{
		cout << a[n / 2 - 1];
	} 
	if (n % 2 == 1)
	{
		cout << a[n / 2];
	}

	return 0;
}