#include<bits/stdc++.h>
vector<int>getElements(int n, vector<int>&a){
    //Handling the edge case
    if(n==0 || n==1) return {};
    int smallest=INT_MAX; 
    int ssmallest=INT_MAX;
    int largest=INT_MIN;
    int slargest=INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]<smallest) smallest=a[i];
        if(a[i]>largest) largest=a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]<ssmallest && a[i]!=smallest) ssmallest=a[i];
        if(a[i]>slargest && a[i]!=largest) slargest=a[i];
    }
    return{slargest, ssmallest};
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    return getElements(n, a);
}
