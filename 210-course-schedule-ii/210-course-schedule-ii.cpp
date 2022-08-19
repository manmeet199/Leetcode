class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& p) {
        vector<int> res;
        vector<int> adj[numCourses];
        vector<int> in(numCourses,0);
        for(int i=0; i<p.size(); i++ )
        {
            adj[p[i][1]].push_back(p[i][0]);
            in[p[i][0]]++;
        }
        queue<int> q;
          int c=0;
        for(int i=0; i<numCourses; i++)
        {
            if(in[i]==0)
                q.push(i);
        }
            while(!q.empty())
            {
                auto it=q.front();
                q.pop();
                res.push_back(it);
                c++;
                for(auto x:adj[it])
                {
                    if(--in[x]==0)
                        q.push(x);
                    
                    
                    
                }
            }
        
        if(c==numCourses)
            return res;
        return {};
        
    }
};