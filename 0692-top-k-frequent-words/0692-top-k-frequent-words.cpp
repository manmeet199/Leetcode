class Solution {
public:
    struct Comp {
        bool operator()(const pair<int, string>& lhs, const pair<int, string>& rhs)  {
            if (lhs.first != rhs.first)
                return lhs.first < rhs.first;//lexicographic
            return lhs.second > rhs.second;
        } 
    };
    vector<string> topKFrequent(vector<string>& nums, int k) {
          unordered_map<string,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
             priority_queue <pair<int, string>, vector<pair<int, string>>, Comp> pq;
              for(auto it: m)
              {
                  // By default a max heap is created ordered
	// by first element of pair.
                  // to order by it.second or freqc ount we have made pair of it.second,it.first
                  pq.push({it.second,it.first});
              }
              vector<string> ans(k);
              for(int i=0; i<k; i++)
              {
                  ans[i]=pq.top().second;
                
                 
                    pq.pop();
                  
              }
        return ans;
    }
};