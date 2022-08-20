class Solution {
public:
    bool bfsBipartite(int s, vector<vector<int>> adj, int color[])
{
        queue<int> q;
        
    q.push(s);
    color[s]=1;
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            
            for(auto x: adj[it])
            {
                if(color[x]==-1)
                {
                    color[x]=1-color[it];
                    q.push(x);
                }
                else if(color[x]==color[it])
                {
                    return false;
                }
            }
            
        }
        return true;
       
    }


    bool isBipartite(vector<vector<int>>& graph) {
      int n=graph.size();
         int color[n];
	    memset(color,-1,sizeof(color));
	    for(int i=0; i<n; i++)
	    {
	        if(color[i]==-1)
                
	        {
                
	            if(!bfsBipartite(i,graph,color))
	            {
	                return false;
	            }
	        }
	    }
	    return true;
        
    }
};