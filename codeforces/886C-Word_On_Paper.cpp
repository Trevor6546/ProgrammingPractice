#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<char>> v[8][8];
        bool first = false;
        int a, b;
        for(int i=0; i<8;i++){
            for(int j=0; j<8;j++){
                char x;
                cin>>x;
                if(isalpha(x)){
                    cout << x;
                }
            }
        }
        cout<<endl;
    }
}