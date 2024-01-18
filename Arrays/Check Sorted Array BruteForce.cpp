int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]<a[i]) return false;
        }
    }
    return true;
}
