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

void bfs(int color[], int u)
{
	queue<int>que; 
	que.push(u); 

	while (!que.empty()) {
		int v = que.front(); 
		cout << v << endl; 
		que.pop(); 

		for (int i = 0; i < graph[v].size(); i++) {
			if (color[graph[v][i].y] == 0) {
				que.push(graph[v][i].y); 
				color[graph[v][i].y] = 1;
			}
		} 
		color[v] = 2;
	}
}

/*void print_graph()
{
	int min = graph[1][0].w; 

	for (int i = 1; i < v_num + 1; i++) {
		for (int j = 0; j < graph[i].size(); j++) {
			if (min > graph[i][j].w)
				min = graph[i][j].w;
		}
	} 

	for (int i = 1; i < v_num + 1; i++) {
		for (int j = 0; j < graph[i].size(); j++) {
			if (graph[i][j].w == min) {
				if (i < graph[i][j].y)
					cout << i << " " << graph[i][j].y << " " << graph[i][j].w << endl;
				else
					cout << graph[i][j].y << " " << i << " " << graph[i][j].w << endl;
			}
		}
	}
}*/

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


int main()
{
	int color[20] = {0};
	make_graph(0); 
	bfs(color,1);
}