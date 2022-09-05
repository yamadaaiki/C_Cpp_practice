#include <iostream>

using namespace std;

void show_x_y(int x, int y){
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";

    return;
}

int main(void){

    int x = 123, y = 567, sw;

    show_x_y(x, y);

    cout << "値を変更する変数[0 -> x, 1 -> y] : ";
    cin >> sw;

    int* ptr;
    if (sw == 0){
        ptr = &x;
    } else if (sw == 1){
        ptr = &y;
    } else {
        cout << "error" << endl;
        return 0;
    }

    *ptr = 999;
    show_x_y(x, y);

return 0;

}