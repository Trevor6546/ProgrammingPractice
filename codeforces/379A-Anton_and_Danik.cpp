#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    cin>>s;
    int dcnt = 0;
    int acnt = 0;
    for(int i=0; i<t;i++){
        if(s[i] == 'A'){
            acnt++;
        }
        else{
            dcnt++;
        }
    }
    if(acnt > dcnt){
        cout << "Anton" << endl;
    }
    else if(acnt == dcnt){
        cout << "Friendship" << endl;
    }
    else{
        cout << "Danik" << endl;
    }
}