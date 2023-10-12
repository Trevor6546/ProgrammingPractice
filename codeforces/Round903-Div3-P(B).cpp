#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mn = min({a,b,c});
        bool truth = true;
        int count = 0;
        if(a%mn != 0 || b%mn != 0 || c%mn != 0){
            truth = false;
        }
        while(a != mn){
            if(a%mn != 0 || count > 3){
                truth = false;
                break;
            }
            a -= mn;
            count++;
        }
        while(b != mn){
            if(b%mn != 0 || count > 3){
                truth = false;
                break;
            }
            b -= mn;
            count++;
        }
        while(c != mn){
            if(c%mn != 0 || count > 3){
                truth = false;
                break;
            }
            c -= mn;
            count++;
        }
        if(count > 3){
            truth = false;
        }
        if(truth){
            cout <<"YES"<<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}