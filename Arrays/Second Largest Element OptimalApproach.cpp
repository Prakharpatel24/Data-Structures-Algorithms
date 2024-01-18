#include<bits/stdc++.h>
int getSecondSmallest(int n, vector<int>&a){
    if(n<2) return -1;
    int smallest=INT_MAX;
    int ssmallest=INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<smallest){
            ssmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]!=smallest && a[i]<ssmallest){
            ssmallest=a[i];
        }
    }
    return ssmallest;
}

int getSecondLargest(int n, vector<int>&a){
    if(n<2) return -1;
    int largest=INT_MIN;
    int slargest=INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]!=largest && a[i]>slargest){
            slargest=a[i];
        }
    }
    return slargest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int ssmallest=getSecondSmallest(n,a);
    int slargest=getSecondLargest(n,a);
    return {slargest,ssmallest};
}
