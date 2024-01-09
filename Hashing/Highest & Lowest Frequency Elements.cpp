vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    unordered_map<int,int>mpp;
    for(auto it:v) mpp[it]++;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int smallest=INT_MAX;
    int largest=INT_MAX;
    for(auto it:mpp){
        if(it.second>maxi){
            maxi=it.second;
            largest=it.first;
        }
        if(it.second==maxi){
            largest=min(largest,it.first);
        }
        if(it.second<mini){
            mini=it.second;
            smallest=it.first;
        }
        if(it.second==mini){
            smallest=min(smallest, it.first);
        }
    }
    return {largest,smallest};
}
