#include <iostream>
#include <string>

using namespace std;

int main(void){

    int array[] = {4, 2, 1, 9, 5};

    size_t len = sizeof(array) / sizeof(int);

    for(int i=0; i<len; i++){
        cout << array[i] << endl;
    }

    return 0;
}
