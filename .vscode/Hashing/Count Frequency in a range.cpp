vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int> ans(n,0);
    for(auto it: nums){
        if(it<=n){
            ans[it-1]++;
        }
    }
    return ans;
}
