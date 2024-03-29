//This is DSU class is made using both path compression and union by rank.  
class DSU
{
    private:
        vector<int> par,_rank;
    public:
        DSU(int n)
        {
            par.resize(n+1,-1);
            _rank.resize(n+1,1);
        }
        int find(int x)
        {
            if(par[x]==-1) return x;
            return par[x]=find(par[x]);
        }
        void merge(int x,int y)
        {
            int a=find(x),b=find(y);
            if(a!=b)
            {
                if(_rank[a]>_rank[b]) swap(a,b);
                par[b]=a;
                _rank[a]+=_rank[b];
            }
        }
}
