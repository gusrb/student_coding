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
	if (N == 3)
	{ 
		sum = a[0] + (a[0] + a[1]) + a[2];

	} 
	if (N == 4)
	{


		sum = a[0] + (a[0] + a[2]) + a[1]+(a[1]+a[3]);


	} 
	if (N == 5)
	{


		sum = a[0] + (a[0] + a[2]) + (a[0] + a[2]+a[4])+ a[1] + (a[1] + a[3]);


	} 
	if (N == 6)
	{


		sum = a[0] + (a[0] + a[2]) + (a[0] + a[2] + a[4]) + a[1] + (a[1] + a[3])+(a[1]+a[3]+a[5]);


	}
	
	cout << sum;


	return 0;

} 