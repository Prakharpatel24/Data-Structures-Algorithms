#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	set<int>st;
	for(int i=0; i<n; i++){
		st.insert(arr[i]);
	}
	int ind=0;
	int size=st.size();
	for(auto it:st){
		arr[ind]=it;
		ind++;
	}
	return size;
}
