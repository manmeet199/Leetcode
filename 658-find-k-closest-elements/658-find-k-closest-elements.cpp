class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(int a:arr)
        {
            pq.push({abs(a-x),a});
            if(pq.size()>k)
                pq.pop();
        }
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};