#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int multi = 10;
        vector<int> v;
        int n;
        cin>>n;
        while(n!=0){
            int x = n%multi;
            if(x != 0){
                v.push_back(x);
            }
            multi*=10;
            n -= x;
        }
        cout << v.size() << endl;
        for(int x : v){
            cout << x << " ";
        }
        cout<<endl;
    }
}