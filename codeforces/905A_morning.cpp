#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int time = 0;
        int diff = stoi(s.substr(0,1));
        if(diff != 1){
            if(diff = 0){
                diff = 10;
            }
            time = (diff - 1) + time;
        }
        for(int i=0; i<4;i++){
            int num = stoi(s.substr(i,1));
            if(num == 0){
                num = 10;
            }
            int x = abs(num-diff);
            diff = x;
            time = time + diff + 1;
            diff = num;
        }
        cout<<time<<endl;
    }
}