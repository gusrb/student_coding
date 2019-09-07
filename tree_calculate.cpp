#include <iostream> 
using namespace std;  
int t,treeNode; 
char tree[100];

void inOrder(int node)
{
	if (tree[node] == NULL)
		return;  
	inOrder(node * 2);
	cout << tree[node] << " ";
	inOrder(node * 2 + 1);
}  

void preOrder(int node) {
	if (tree[node] == NULL)
		return;
	cout << tree[node] << " ";;
	preOrder(node * 2);
	preOrder(node * 2+1);
}

void postOrder(int node)
{
	if (tree[node] == NULL)
		return; 
	postOrder(node * 2);
	postOrder(node * 2 + 1);
	cout << tree[node] << " ";
	
}


int main()
{  
	int n,index; 
	char node;
	cin >> n; 
	for (int i = 0; i < n; i++)
	{ 
		cin >> index;  
		cin >> node;
		tree[index] = node;
		 
	}   

	cout << "in-order : ";
	inOrder(1);  

	cout << endl<<"pre-order : ";
	preOrder(1);  

	cout <<endl<< "post-order : ";
	postOrder(1);
		
}