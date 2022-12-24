#include <iostream>
using namespace std;

int main(){
    int matriz[3][5] = {{4,7,1,3,5},
                       {2,0,6,9,7},
                       {3,1,2,6,4}};

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            cout<< matriz[j][i] << " ";
        }
        cout<<endl;
    }
    return 0;
}