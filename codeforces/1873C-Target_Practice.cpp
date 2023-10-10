#include <iostream>
using namespace std;
int value(int x, int y){
    if(x == 0 || y == 0 || x == 9 || y == 9){
        return 1;
    }
    else if(x == 1 || y == 1 || x == 8 || y == 8){
        return 2;
    }
    else if(x==2 || y==2 || x == 7 || y == 7){
        return 3;
    }
    else if(x==3||y==3 || x == 6 || y == 6){
        return 4;
    }
    else{
        return 5;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int score = 0;
        for(int i=0; i<100;i++){
            char x;
            cin>>x;
            if(x == 'X'){
                int a = i/10;
                int b = i%10;
                score += value(a,b); 
            }
        }
        cout << score << endl;
    }
}