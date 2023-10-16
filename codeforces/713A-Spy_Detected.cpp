#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        vector<int> v2;
        for(int i=0; i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            v2.push_back(x);
        }
        int wack = 0;
        sort(v2.begin(),v2.end());
        if(v2[0] != v2[1]){
            wack = v2[0];
        }
        else{
            int s = v2.size() -1;
            wack = v2[s];
        }
        for(int i=0; i<n;i++){
            if(v[i] == wack){
                cout << i+1 << endl;
            }
        }
    }
}