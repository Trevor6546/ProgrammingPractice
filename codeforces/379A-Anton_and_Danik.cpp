#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int width = 0;
    for(int i=0; i<x;i++){
        int z;
        cin>>z;
        if(z > y){
            width += 2;
        }
        else{
            width++;
        }
    }
    cout<<width<<endl;
}