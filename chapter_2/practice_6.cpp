#include <iostream>
#include <string>

using namespace std;

class A{

    int V;

public:
    void set_value(int new_value); //__init()__みたいなもの
    int get_value() const;
    int get_value();
};

void A::set_value(int new_value){
    V = new_value;
}

int A::get_value() const{
    cout << "const" << endl;
    return V;
}

int A::get_value(){
    cout<< "hiconst" << endl;
    return V;
}

int main(void){

    A a;
    a.set_value(5);

    int G;
    G = a.get_value();

    cout << G << endl;

    const A& ca = a;

    int F;
    F = ca.get_value();

    cout << F << endl;

    return 0;
}
