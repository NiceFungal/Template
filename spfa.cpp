#include<iostream>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

const int MAXN = 1000 + 5;
const int INF = 0x3f3f3f3f;

struct Edge
{
	int v;
	int cost;
	Edge(int _v = 0, int _cost = 0) : v(_v), cost(_cost) {}
};

vector<Edge> E[MAXN];

inline void addedge(int u, int v, int w)
{
	E[u].push_back(Edge(v, w));
}

bool vis[MAXN];
int cnt[MAXN];
int dis[MAXN];

inline bool SPFA(int start, int n)
{
	memset(vis, false, sizeof(vis));
	for(int i = 1; i <= n; i++)
		dis[i] = INF;
	vis[start] = true;
	dis[start] = 0;
	queue<int> que;
	while(!que.empty())
		que.pop();
	que.push(start);
	memset(cnt, 0, sizeof(cnt));
	cnt[start] = 1;
	while(!que.empty())
	{
		int u = que.front();
		que.pop();
		vis[u] = false;
		for(int i = 0; i < E[u].size(); i++)
		{
			int v = E[u][i].v;
			if(dis[v] > dis[u] + E[u][i].cost)
			{
				dis[v] = dis[u] + E[u][i].cost;
				if(!vis[v])
				{
					vis[v] = true;
					que.push(v);
					if(++cnt[v] > n)
						return false;
				}
			}
		}
	}
	return true;
}

int main()
{
	return 0;
}
