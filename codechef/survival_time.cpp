#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int limit = b*5;
	    int days = 0;
	    while(a >= limit){
	        a -= limit;
	        days++;
	    }
	    cout<<days+c<<endl;
	}
	return 0;
}
