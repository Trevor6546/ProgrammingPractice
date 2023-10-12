#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        char a[n][n];
        for(long long i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        long long ans = 0;
        for(int i=0; i<n/2;i++){
            for(int j=i;j<n-i-1;j++){
                char c=max({a[i][j], a[n-1-j][i],a[n-i-1][n-1-j],a[j][n-1-i]});
                ans+=(abs(c-a[i][j])+abs(c-a[n-1-j][i])+abs(c-a[n-1-i][n-1-j])+abs(c-a[j][n-1-i]));
            }
        }
        cout<<ans<<endl;
    }
}
