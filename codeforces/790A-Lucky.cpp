#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int a,b,c,d,e,f;
	    a = stoi(s.substr(0,1));
	    b = stoi(s.substr(1,1));
	    c = stoi(s.substr(2,1));
	    d = stoi(s.substr(3,1));
	    e = stoi(s.substr(4,1));
	    f = stoi(s.substr(5,1));
	    if((a+b+c)==(d+e+f)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}