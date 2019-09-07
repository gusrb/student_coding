#include <iostream> 
using namespace std;  
int tree[100];
void dfs(int node)
{
	if (tree[node] == 0)
		return; 
	cout << tree[node] << " ";
	dfs(node * 2); 
	dfs(node * 2 + 1);
} 

int main()
{  
	int n,index,node;
	cin >> n; 
	for (int i = 0; i < n; i++)
	{ 
		cin >> index;  
		cin >> node;
		tree[index] = node;
		 
	} 
	dfs(1);

}