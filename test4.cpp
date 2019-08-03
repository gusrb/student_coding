#include<iostream>  
#include<algorithm>
using namespace std;
int a[10], sum = 0;


int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	sort(a, a + N);
	for (int i = 0; i < N; i++)
	{
		sum += a[i] * (N - i);
	}
	cout << sum;


	return 0;

}