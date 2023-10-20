#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    bool isOdd = false;
	    while(n!=0){
	        int p = n%10;
	        v.push_back(p);
	        n /= 10;
	        if(p%2==0){
	            isOdd = true;
	        }
	    }
	    int len = v.size();
	    if(v[0] % 2 == 0){
	        cout<<0<<endl;
	    }
	    else if(v[len-1] % 2==0){
	        cout<<1<<endl;
	    }
	    else if(!isOdd){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<2<<endl;
	    }
	}
}