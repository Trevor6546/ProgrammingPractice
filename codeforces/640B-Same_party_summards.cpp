#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool check(vector<long long int> v){
    int x = v.size()-1;
    int a = v[x]%2;
    int b = v[0]%2;
    if(a==b && v[x] > 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<long long int> v1;
        vector<long long int>v2;
        if(k>n){
            cout << "NO" << endl;
        }
        else{
        int sum1 = (k-1);
        int sum2 = 2*(k-1);
        for(int i=0; i<(k-1);i++){
            v1.push_back(1);
        }
        v1.push_back(n-sum1);
        for(int i=0; i<(k-1);i++){
            v2.push_back(2);
        }
        v2.push_back(n-sum2);
        if(check(v1)){
            cout << "YES" <<endl;
            for(int x : v1){
                cout << x << " ";
            }
            cout<<endl;
        }
        else if(check(v2)){
            cout << "YES" << endl;
            for(int x : v2){
                cout << x << " ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }
}