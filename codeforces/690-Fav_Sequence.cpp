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
	    int arr[n];
	    for(int i=0; i<n;i++){
	        int x;
	        cin>>x;
	        arr[i] = x;
	    }
	    for(int i=0; i<n; i++){
	        if(i%2==0){
	            v.push_back(arr[i/2]);
	        }
	        else{
	            v.push_back(arr[n-(i/2)-1]);
	        }
	    }
	    for(int c : v){
	        cout<<c<<" ";
	    }
	    cout<<endl;
	}
}