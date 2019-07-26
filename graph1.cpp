#include <iostream>
using namespace std;
int main() {
	int node, edge, a[10][10] = { 0 }, min = 2000, min_a[10][10] = { 0 }, c = 0;
	cin >> node >> edge; 
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{	
		if (a[i][2] < min)
		{
			min = a[i][2];
			
		}
	}  
	for (int i = 0; i < 5; i++)
	{
		if (a[i][2] == min)
		{ 
			cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
		}
	}
}