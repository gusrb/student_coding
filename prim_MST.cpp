#include<iostream> 
#include<vector>   
#include <queue>
using namespace std;

#define MAXV 1000
typedef struct vertex {
	int y;
	int w;
} Vertex;
vector<Vertex> graph[MAXV + 1];
int v_num, e_num; 
int MAX=1000; 
int sum = 0;
void make_graph(bool directed)
{
	int x, y, w;
	Vertex node;
	cin >> v_num >> e_num;
	for (int i = 0; i < e_num; i++) {
		cin >> x >> y >> w;
		node.y = y; node.w = w;
		graph[x].push_back(node);
		if (!directed) {
			node.y = x;
			graph[y].push_back(node);
		}
	}
}

void prim_test() {
	int key[MAXV + 1], p[MAXV + 1];
	bool check[MAXV + 1];
	make_graph(false);
	for (int i = 1; i <= v_num; i++)
		key[i] = MAX;
	for (int i = 1; i <= v_num; i++)
		check[i] = false;
	key[1] = 0; p[1] = 1;
	for (int i = 0; i < v_num; i++) {
		int u=0, min = MAX;
		for (int j = 1; j <= v_num; j++)
			if (!check[j] && min > key[j]) {
				
				min = key[j]; 
				u = j; 
				
			} 
		sum += min;
		check[u] = true;
		//cout << "(" << p[u] << ", " << u << ")" << endl;
		for (int j = 0; j < graph[u].size(); j++) {
			int v = graph[u][j].y;
			if (!check[v] && graph[u][j].w < key[v]) {
				key[v] = graph[u][j].w;
				p[v] = u;
			}
		}
	}
}
int main()
{ 
	
	prim_test(); 
	cout << sum;
} 