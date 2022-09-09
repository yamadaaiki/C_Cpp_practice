#include <iostream>
#include <string>

using namespace std;

class Base{
public:

    virtual string name() const;
};

string Base::name() const{
    return "Base";
}

class Derived : public Base{
public:

    virtual string name() const override;
};

string Derived::name() const{
    return "Derived";
}

class MoreDerived : public Derived{
public:
    string name() const override;
};

string MoreDerived::name() const{
    return "MoreDerived";
}


int main(void){

    MoreDerived ggg;
    Derived fff;

    string f = ggg.name();

    cout << f << endl;

    cout << fff.name() << endl;

    return 0;
}