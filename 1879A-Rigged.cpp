#include <iostream>
#include <set>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        set<int> maxW;
        set<int> maxL;
        int q;
        cin>>q;
        int w1, l1;
        cin>>w1>>l1;
        q--;
        while(q--){
            int w;
            int l;
            cin>>w>>l;
            if(w >= w1 && l >= l1){
                maxL.insert(l);
            }
        }
        if(maxL.size() == 0){
            cout << w1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}