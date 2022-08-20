class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int cur=0;
        int totalfuel=0;
        int totalcost=0;
        int start=0;
        for(int i=0; i<gas.size(); i++)
        {
            totalfuel+=gas[i];
        }
        for(int i=0; i<cost.size(); i++)
        {
            totalcost+=cost[i];
        }
        if(totalfuel<totalcost)
            return -1;
        for(int i=0;i<gas.size(); i++)
        {
            cur+=(gas[i]-cost[i]);
            if(cur<0)
            {
                start=i+1;
                cur=0;
            }
        }
        return start;
    }
};