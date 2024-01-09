#include<bits/stdc++.h>
using namespace std;

void printFrequency(string s, char c, int cnt){
    for(int i=0; i<s.size(); i++){
        if(s[i]==c) cnt++;
    }
    cout<<cnt;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    //queries
    int q; 
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        printFrequency(s, c, 0);
    }
}
