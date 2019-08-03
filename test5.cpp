#include<iostream>  
#include<algorithm>
using namespace std;
int main()
{
	int N,sum=0,i; 
	char a[20],color[3];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	} 



	for ( i = 0; i < N; i++)
	{
		if (a[i] != color[0] && a[i] != color[1] && a[i] != color[2])
		{
			color[0] = a[i]; 
			if (color[0] != 0)
			{
				color[1] = a[i]; 
			} 
			else
			{
				color[2] = a[i];
			}
			sum++; 
			i++;
		} 
		else
		{
			i++;
		}
	}

	cout << sum-3;
	return 0;

}