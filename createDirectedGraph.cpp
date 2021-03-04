//author:satwik_bhv1
//creating Directed_graph using adjacencylist
/*
	edge a->b is different from edge b->a
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> ar[10001];//adjaceny list(array of vectors)=>data structure used for creating graph
int main()
{
	int n;//number of nodes
	int m;//number of edges
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		ar[a].push_back(b);
	}
}
