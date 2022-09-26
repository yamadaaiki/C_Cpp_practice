#include <vector>
#include <iostream>

using namespace std;

class Object{

    string name  = "default";

public:
    Object() : Object("NO NAME") {}
    explicit Object(string name) : name(name) {}
    ~Object();

    void show_name() const;
};

Object::~Object(){
    cout << "Objectのデストラクター" << endl;
}

void Object::show_name() const{
    cout << "object.name : " << name <<endl;
}


int main(){

    Object* obj = new Object[10]{
        Object{"first"},
        Object{"second"},
        Object{},
        Object{},
        Object{"five"},
        Object{"six"},
    };

    for(int i=0; i<10; i++){
        obj[i].show_name();
    }

    delete [] obj;

    return 0;
}