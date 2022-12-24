#include <iostream>
using namespace std;

class X{
    private:
        int y;
        X* x;

    public:
        
};

int main(){
    int *x, *y, z;
    z = 15;
    y = &z;
    x = y;

    cout << y << endl;
    cout << x << endl;
    cout << &z << endl; 
    return 0;
}