#include <iostream> 
using namespace std;

void dfs(int lv, int val, int data[]) {
	data[lv] = val;

	if (lv == 3)
	{
		for (int i = 1; i <= 3; i++)
			cout << data[i];
		cout << endl;
		
		return;
	}
	for (int i = 0; i < 2; i++)
	{
		dfs(lv + 1, i, data);
	}
}

int main()
{
	int n;
	int data[10];
	dfs(0, 0, data); 

	
}

