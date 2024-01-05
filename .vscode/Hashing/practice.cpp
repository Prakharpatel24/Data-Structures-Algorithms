#include<bits/stdc++.h>
using namespace std;

void printFrequency(int i, int n, int arr[], int number){
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]==number) cnt++;
    }
    cout<<cnt;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        printFrequency(0, n, arr, number);
    }   
}