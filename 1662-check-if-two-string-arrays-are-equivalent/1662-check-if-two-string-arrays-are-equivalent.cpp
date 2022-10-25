class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string x,y;
        for(auto xx: word1)
        {
            x+=xx;
            
        }
        for(auto yy: word2)
        {
            y+=yy;
        }
        if(x==y)
            return 1;
        return 0;
        
    }
};