#include <iostream>

using namespace std;

int main(void){

    int i = 0;

    int* ptr = &i;
    *ptr = 42;

    cout << i << endl;
    return 0;
}