#include <iostream>

void show_message(int value){

    if (10 > value || 20 <= value){
        std::cout << "10以上20未満ではありません。" << std::endl;
    } else {
        std::cout << "10以上20未満です。" << std::endl;
    }
}

int main(void){
    show_message(9);
    show_message(10);
    show_message(15);
    show_message(20);
}