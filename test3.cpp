#include <iostream>     
#include <vector> 
#include <string.h> 
using namespace std;
int main()
{
	int N, sum = 0;
	cin >> N; 
	for (int i = 1; i <= N; i++)
	{ 
		if (N%i == 0)
		{
			sum++;
		}
	} 

	cout << sum;
	return 0;

}
