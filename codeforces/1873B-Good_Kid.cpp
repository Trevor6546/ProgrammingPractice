#include <bits/stdc++.h>
using namespace std;
int product(vector<int> v){
    int prod = 1;
    for(int x : v){
        prod *= x;
    }
    return prod;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int max = -1;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i<n; i++){
            int temp = v[i];
            v[i]++;
            int newMax = product(v);
            if(newMax > max){
                max = newMax;
            }
            v[i] = temp;
        }
        cout << max << endl;
    }
}