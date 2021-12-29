class Solution{
    public:
    
    void solve(vector<int> &A, int N, int B,int start,vector<vector<int> > &res,
    vector<int> &contri)
    {
        if(B<0)
        return;
        if(B==0)
        {
            res.push_back(contri);
            return;
        }
        
        for(int j=start;j<N;j++)
        {
            if(A[j]!=A[j-1]||j==start)
            {
            contri.push_back(A[j]);
            solve(A,N,B-A[j],j+1,res,contri);
            contri.pop_back();
        }
        }
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int> &A, int N, int B){
        // code here
        vector<int > contri;
        vector<vector<int> > res;
        sort(A.begin(),A.end());
        solve(A, N, B,0,res,contri);
        return res;
        
    }
};
