class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mp;
        int n=arr.size();
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto it: mp)
        {
            pq.push({it.second,it.first});
        }
        int dem=0;
        int cnt=0;
       for(int i=0; i<pq.size(); i++)
           
           
       {
           
           
           dem+=pq.top().first;
           cnt++;
           pq.pop();
           
           if(dem>=n/2)
           {
             break;  
               
           }
           
           
           
       }
        return cnt;
    }
};