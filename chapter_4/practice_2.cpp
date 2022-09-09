#include <iostream>
#include <string>

using namespace std;

class A{
    int v_m;

public:
    explicit A(int v) : v_m(v){
    }

    int v() const{
        return v_m;
    }
};

int main(void){

    A y(345);

    if (y.v() == 345){
        cout << "ddddd" << endl;
    }

    return 0;
}

