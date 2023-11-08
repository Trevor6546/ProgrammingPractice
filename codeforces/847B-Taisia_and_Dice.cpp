#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        int missing = s-r;
        int sum=0;
        for(int i=1; i<n-1;i++){
            cout<<r/(n-1)<<" ";
            sum+= r/(n-1);
        }
        cout<<r-sum<<" ";
        cout<<missing<<endl;
    }
}