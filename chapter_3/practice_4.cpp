#include <iostream>
#include <string>

using namespace std;

class Base{
public:

    virtual string name() const;
    virtual string most_name() const;
};

string Base::name() const{
    return "Base";
}

string Base::most_name() const{
    return "Base_most_name";
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
    string most_name() const override;
};

string MoreDerived::name() const{
    return "MoreDerived";
}

string MoreDerived::most_name() const{
    return "aiueo";
}


int main(void){

    MoreDerived ggg;
    Derived fff;

    string f = ggg.name();

    cout << f << endl;

    cout << fff.name() << endl;

    cout << ggg.most_name() <<endl;

    Derived dfg;

    cout << dfg.name() << endl;

    cout << dfg.most_name() <<endl;

    return 0;
}