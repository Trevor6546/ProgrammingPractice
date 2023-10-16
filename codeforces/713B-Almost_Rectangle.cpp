#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char v[n][n];
        int x1, x2, y1, y2;
        bool first = true;
        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                char x;
                cin>>x;
                v[i][j] = x;
                if(x == '*' && first){
                    x1 = i;
                    y1 = j;
                    first = false;
                }
                else if(x=='*'&&!first){
                    x2 = i;
                    y2 = j;
                }
            }
        }
        int ydiff = abs(y2-y1);
        int xdiff = abs(x2-x1);
        if(xdiff == 0){
            int newXDiff;
            if(x1 + ydiff >= n){
                newXDiff = x1-ydiff;
                if(newXDiff < 0){
                    newXDiff = 0;
                }
            }
            else{
                newXDiff = x1+ydiff;
            }
            v[newXDiff][y1] = '*';
            v[newXDiff][y2] = '*';
        }
        else if(ydiff == 0){
            int newYDiff;
            if(y1 + xdiff >= n){
                newYDiff = y1-xdiff;
                if(newYDiff < 0){
                    newYDiff = 0;
                }
            }
            else{
                newYDiff = y1+xdiff;
            }
            v[x1][newYDiff] = '*';
            v[x2][newYDiff] = '*';
        }
        else{
            v[x2][y1] = '*';
            v[x1][y2] = '*';
        }
        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                cout << v[i][j];
            }
            cout<<endl;
        }
    }
}