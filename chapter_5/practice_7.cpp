#include <vector>
#include <iostream>

using namespace std;

class product{
    int value;
    string name;

public:
    explicit product() : value(0), name("No Name"){};
    explicit product(int value, string name) : value(value), name(name){};

    const int&    get_value() const;
    const string& get_name() const;
};

const int& product::get_value() const{
    return value;
}

const string& product::get_name() const{
    return name;
}


int main(){

    product obj{100, "keshigomu"};

    const int& obj_value = obj.get_value();
    const string& obj_name = obj.get_name();

    product obj2{};

    const int& obj2_value = obj2.get_value();
    const string& obj2_name = obj2.get_name();

    cout << obj_value << " : " << obj_name << endl;

    cout << obj2_value << " : " << obj2_name << endl;

    return 0;
}