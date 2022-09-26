#include <vector>
#include <iostream>

using namespace std;

class product{
    int    id    = 000;
    string name  = "default";
    int    price = 0;

public:
    explicit product(int id, string name, int price)
        :id(id), name(name), price(price) {}

    explicit product(){}

    void set_id(int id){
        this->id = id;
    }
    void set_name(string name){
        this->name = name;
    }
    void set_price(int price){
        this->price = price;
    }

    int get_id() const{
        return id;
    }

    string get_name() const{
        return name;
    }

    int get_price() const{
        return price;
    }

    void view_product_member() const{
        cout << id <<" : " << name << " : " << price << endl;
    }
};



int main(){

    vector<product> seihin = {
        product{1, "smart phone", 60000},
        product{2, "tablet"     , 35000},
        product{},
        product{}
    };

    for (auto pro : seihin){
        pro.view_product_member();
    }

    return 0;
}