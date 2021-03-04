//author:satwik_bhv1
//counting connected components in an undirected_graph
/*
	edge a->b is same as edge b->a
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> ar[10001];//adjaceny list(array of vectors)=>data structure used for creating graph
int vis[10001];//visited array=> An array to keep track whether a node is visited or not
void dfs(int par)
{
	if(!vis[par])
	{
		vis[par]=1;
	}
	for(int ch:ar[par])
	{
		if(!vis[ch])
		{
			vis[ch]=1;
			dfs(ch);
		}
	}
}
int main()
{
	int n;//number of nodes
	int m;//number of edges
	int cnt=0;//number of connected components
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			cnt++;
			dfs(i);
		}
	}
	cout<<cnt<<"\n";
}
