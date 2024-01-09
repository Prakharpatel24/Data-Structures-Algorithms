#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(auto it: arr){
        cout<<it<<" ";
    }
}
