#include <vector>
#include <iostream>

using namespace std;

class Float{
    float value;

public:
    Float(float value) : value{value} {}

    Float operator+(const Float& rhs) const;
    Float operator-(const Float& rhs) const;
    Float operator*(const Float& rhs) const;
    Float operator/(const Float& rhs) const;

    void show() const;

};

Float Float::operator+(const Float& rhs) const{
    return Float{value + rhs.value};
}

Float Float::operator-(const Float& rhs) const{
    return Float{value - rhs.value};
}

Float Float::operator*(const Float& rhs) const{
    return Float{value * rhs.value};
}

Float Float::operator/(const Float& rhs) const{
    return Float{value / rhs.value};
}

void Float::show() const{
    cout << value << endl;
}


int main(){

    Float x = 10.5;
    Float y = 3.2;
    Float z = 7.2;

    auto v = x - y / y + z * x;

    v.show();

    return 0;
}