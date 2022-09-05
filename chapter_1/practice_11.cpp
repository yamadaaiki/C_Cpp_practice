#include <iostream>
#include <typeinfo>

using namespace std;

void showAdress(const char a, int x){

    cout << a << "  : " << typeid(x).name() << "\n";
    cout << "&" << a << " : " << typeid(&x).name() << "\n";

}

void showAdress_ptr(const char a, int* x){

    cout << a << "  : " << typeid(x).name() << "\n";
    cout << "*" << a << " : " << typeid(*x).name() << "\n";

}

int main(void){

    int n;
    int* p;

    showAdress('n', n);
    showAdress_ptr('p', p);


    return 0;

}