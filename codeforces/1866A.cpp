#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min = 1000000;
        while(n--){
            int x;
            cin>>x;
            x = abs(x);
            if(x < min){
                min = x;
            }
        }
        cout << min << endl;
    }
}