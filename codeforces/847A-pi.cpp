#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    string pi = "3141592653589793238462643383279502884197";
	    int count = 0;
	    bool final = true;
	    for(int i=0; i<s.length();i++){
	        if(s[i] != pi[i]){
	            cout<<count<<endl;
	            final = false;
	            break;
	        }
	        else{
	            count++;
	        }
	    }
	    if(final){
	        cout<<count<<endl;
	    }
	}
}