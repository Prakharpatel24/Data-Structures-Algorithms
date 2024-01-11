#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int mini=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[mini]) mini=j;
        }
        int temp= arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
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
    selectionSort(arr,n);
    for(auto it: arr){
        cout<<it<<" ";
    }
}
