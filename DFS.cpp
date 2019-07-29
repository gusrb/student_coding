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

void dfs(int color[], int u)
{
	color[u] = 1;
	for (int i = 0; i < graph[u].size(); i++)
		if (color[graph[u][i].y] == 0) {
			cout << "(" << u << ","
				<< graph[u][i].y << ")";
			dfs(color, graph[u][i].y);
		}
	color[u] = 2;
}

void dfs_traverse()
{
	int color[MAXV + 1];
	make_graph(true);
	for (int i = 1; i <= v_num; i++)
		color[i] = 0;
	for (int i = 1; i <= v_num; i++)
		if (color[i] == 0)
			dfs(color, i);
}

int main()
{
	dfs_traverse();
}