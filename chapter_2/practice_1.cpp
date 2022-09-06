#include <iostream>
#include <string>

using namespace std;

struct Product{
    int id;
    int price;
    int stock;
};

void ShowProduct(Product* product){

    cout << "product id : " << product->id <<endl;
    cout << "price      : " << product->price << endl;
    cout << "stock num  : " << product->stock << endl;
    
}

int main(void){

    Product pen = {0, 100, 200};

    ShowProduct(&pen);

    return 0;
}
