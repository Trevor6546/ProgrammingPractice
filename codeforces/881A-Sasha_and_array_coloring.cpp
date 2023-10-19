#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    vector<int> v;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    int ans = 0;
	    if(n >= 4){
	        for(int i=0; i<n/2;i++){
	            ans += v[n-i-1] - v[i];
	        }
	    }
	    else if(n==3){
	        ans = (v[2]-v[0]);
	    }
	    else if (n == 2){
	        ans = v[1]-v[0];
	    }
	    else{
	        ans = 0;
	    }
	    cout<<ans<<endl;
	}
}