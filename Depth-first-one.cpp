#include <iostream> 
using namespace std;

void dfs(int lv, int val, int data[]) {
	data[lv] = val;
	int count;
    count = 0;
	if (lv == 5)
	{ 
		for (int i = 1; i <= 5; i++) {
			if (data[i] == 1)
				count = count+1;
		}
		if (count == 3)
			for (int i = 1; i <= 5; i++)
		   		cout << data[i];
                   
            cout<<endl;
		
		return;
	}
	for (int i = 0; i < 2; i++)
	{
		dfs(lv + 1, i, data);
	}
}

int main()
{
	int data[10];
	dfs(0, 0, data);


}
