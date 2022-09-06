#include <iostream>
#include <string>

using namespace std;

int main(void){

    int array[] = {4, 2, 1, 9, 5};
    int i = 4;

    do{
        cout << array[i] << endl;
        i--;
    }while(i >= 0);

    return 0;
}
