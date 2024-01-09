#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<=n-2; i++){
        int min=i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[min]) min=j;
        }
        int temp= arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
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
