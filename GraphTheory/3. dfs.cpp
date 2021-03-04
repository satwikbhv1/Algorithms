//author:satwik_bhv1
//DFS traversal of a graph
/*
	DFS => Depth first search
	1) Starts from root 
	2) goes as far as possible 
	3) backtrack if it is a leaf node or all the vertices in adjacency list are completely visted
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> ar[10001];//adjaceny list(array of vectors)=>data structure used for creating graph
int vis[10001];//visited array=> An array to keep track whether a node is visited or not
void dfs(int par)
{
	cout<<par<<" ";
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
	dfs(1);
}
