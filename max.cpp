#include <iostream> 
using namespace std; 
int main()
{
	int N,max,a[100];
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> a[i];
	max = a[0];
for (int i = 1; i < N; i++)
{
	if (a[i] > max)
		max = a[i];
}
cout << max;



}