#include <iostream>
#include <string>

using namespace std;

class Product{
    int id;
    int price;
    int stock;

public:
    int get_id();
    int get_price();
    int get_stock();

    void set_product_info(int new_id, int new_price, int new_stock);
};

int Product::get_id(){
    return id;
}

int Product::get_price(){
    return price;
}

int Product::get_stock(){
    return stock;
}

void Product::set_product_info(int new_id, int new_price, int new_stock){
    id = new_id;
    
    if (new_price < 0){
        cout << 
        "error : Please enter a unit price greater than or equal to 0."
        << endl;

        return;
    }

    price = new_price;

    if (new_stock < 0){
        cout << 
        "error : Please enter stock greater than or equal to 0."
        << endl;

    }

    stock = new_stock;

}

void ShowProduct(Product* product){

    cout << "product id : " << product->get_id() <<endl;
    cout << "price      : " << product->get_price() << endl;
    cout << "stock num  : " << product->get_stock() << endl;
    
}

int main(void){

    Product pen;

    pen.set_product_info(0, 100, 200);

    ShowProduct(&pen);

    return 0;
}