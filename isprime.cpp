#include <iostream>     
#include <vector> 
#include <string.h> 
using namespace std;

#define MAXN 1000
#define MAXP 300 

int main()
{
	int n, j,sum; 
	sum = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		for (j = 2; j <= i; j++) {
			if (i%j == 0) {
				break;
			}
		}
		if (i == j)
		{ 
			if (sum == 10)
			{
				cout << endl;
				sum = 0;
			}
			cout << i << " ";
			sum++;
		}
		}
		return 0;
	} 