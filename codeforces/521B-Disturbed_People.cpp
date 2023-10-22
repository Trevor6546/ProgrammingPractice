#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    long long int a,b,k;
	    cin>>a>>b>>k;
	    long long int jumps;
	    if(k%2==1){
	        jumps = (((k/2)+1)*a)-((k/2)*b);
	    }
	    else{
	        jumps = ((k/2)*a)-((k/2)*b);
	    }
	    cout<<jumps<<endl;
	}
}