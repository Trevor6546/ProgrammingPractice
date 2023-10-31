#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(str == "YES" || str == "Yes" || str == "YEs" || str == "yES" || str == "yEs" || str == "yeS" || str == "yes" || str == "YeS"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}