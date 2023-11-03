#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxVal = 0;
        int index = 0;
        for(int i=1; i<=n;i++){
            int a,b;
            cin>>a>>b;
            if(a<=10){
                if(b > maxVal){
                    maxVal = b;
                    index = i;
                }
            }
        }
        cout<<index<<endl;
    }
}