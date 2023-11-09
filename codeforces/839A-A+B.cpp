#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int plus;
        int a = stoi(s.substr(0,1));
        int b = stoi(s.substr(2, 1));
        cout<<a+b<<endl;
    }
}