#include <iostream>

using namespace std;

class product{
    int price;

public:
    inline product(int price);

    inline int get_price() const;
    inline void set_price(int price);
};

product::product(int price) : price(price){
}

int product::get_price() const{
    return price;
}

void product::set_price(int price){
    this->price = price;
}

int main(void){

    product A(34545);

    cout << A.get_price() << endl;

}