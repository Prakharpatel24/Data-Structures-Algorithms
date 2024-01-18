#include<bits/stdc++.h>
vector<int>getElements(int n, vector<int>&a){
    //Handling the edge case
    if(n==0 || n==1) return {};
    sort(a.begin(), a.end());
    return {a[n-2], a[1]};
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    return getElements(n, a);
}
