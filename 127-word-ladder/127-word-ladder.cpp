class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        // bfs
        if(find(wordList.begin(),wordList.end(),endWord)==wordList.end())
            return 0;
        set<string> s(wordList.begin(),wordList.end());
        queue<string> q;
        int d=0;
        q.push(beginWord);
        {
            while(!q.empty())
            {
                d++;
              int n=q.size();
                while(n--)
                {
                    auto curr=q.front();
                    q.pop();
                    for(int i=0; i<curr.length(); i++)
                    {
                        string tmp=curr;
                        for(char c='a';c<='z'; c++)
                        {
                            tmp[i]=c;
                            if(tmp==curr)
                                continue;
                            if(tmp==endWord)
                                return d+1;//ans
                            if(s.find(tmp)!=s.end())
                            {
                                q.push(tmp);
                                s.erase(tmp);
                            }
                        }
                    }
                }
            }
        }
        return 0;
    }
};