class Solution{
    public:
    // You need to complete this function



void solve(int N, int from, int to, int aux,int & step)
{
    if(N==1)
    {
        cout<<"move disk "<<N<<" from rod "<<from <<" to rod "<<to <<"\n";
        return;
    }
    solve(N-1,from,aux,to,step);
    step++;
    cout<<"move disk "<< N<<" from rod "<<from <<" to rod "<<to <<"\n";
    solve(N-1,aux,to,from,step);
    step++;
}
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        int step=1;
        solve(N,from,to,aux,step);
        return step;
        // Your code here
    }

};
