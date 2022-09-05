#include <iostream>

// output "Hello World!!!" func
void hello_world(void){
    std::cout << "Hello World!!!" << std::endl;
}

// function to sum 2 natural number and output it
void show_sum(int a, int b){
    int c = a + b;
    std::cout <<"計算結果 : " << c << std::endl;
}

int main(void){

    hello_world();

    std::cout << "2つの整数を入力してください。";

    int a, b;
    std::cin >> a;
    std::cin >> b;

    show_sum(a, b);

    return 0;
}