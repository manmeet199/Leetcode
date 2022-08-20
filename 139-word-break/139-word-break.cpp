class Solution {
public:
    bool wordBreak(string A, vector<string>& B) {
        // int n=s.size();
        // int dp[n+1];
        // memset(dp,0,sizeof(dp));
        // dp[0]=1;
        // for(int i=1; i<=n; i++)//second word
        // {
        //     for(int j=0; j<i; j++) // first word
        //     {
        //         if(dp[j])
        //         {
        //             string sub=s.substr(j,i-j);// second word
        //             if(find(A.begin(),A.end(),sub)!=A.end())
        //             {
        //                 dp[i]=1;
        //                 break;
        //             }
        //         }
        //     }
        // }
        // return true;
        int n=A.size();
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
           for(int i=1; i<=n; i++)
        {
for(int j=0; j<i; j++)
{
    if(dp[j])
    {
        string sub=A.substr(j,i-j);
        if(find(B.begin(),B.end(),sub)!=B.end())
        {
            dp[i]=1;
            break;
        }
    }

}
        }
        return dp[n];
    }
};