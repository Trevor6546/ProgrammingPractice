#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int index = 1;
        int temp = 1;
        for(int i=3; i<=x; i+=pow(2,temp)){
            if(x%i == 0){
                index = i;
                break;
            }
            temp++;
        }
        if(index == 1){
            cout<<index<<endl;
        }
        else{
            cout<<x/index<<endl;
        }
    }
}