
class Solution{
public:
    long long int optimalKeys(int n){
        // code here
        if(n<7)
        return n;
        
    long long dp[n+1];
    for(int i=0;i<=n;i++)
    dp[i]=i;
    
    for(int i=7;i<=n;i++)
    {
        for(int j=n-3;j>=1;j--)
        {
            long long curr=dp[j]*(i-j-1);
            dp[i]=max(dp[i],curr);
        }
    }
    return dp[n];
    }
};
