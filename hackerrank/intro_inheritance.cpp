#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
    public:
        void triangle(){
            cout << "I am a triangle" << endl;
        }
};
class Isosceles : public Triangle{
    public:
        void isosceles(){
            cout << "I am an isosceles triangle" << endl;
            cout << "In an isosceles triangle two sides are equal"<<endl;
        }
};
int main() {
    Isosceles isc;
    isc.isosceles(); 
    isc.triangle();
    return 0;
}
