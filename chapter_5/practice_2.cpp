#include <iostream>
#include <string>

using namespace std;

void reverse(const int array[], int i);

int main(void){

    int array[] = {0, 1, 2, 3, 4};

    reverse(array, 5);

    for(int i=0; i<5; i++){
        cout << *(array + i) << endl;
    }

    return 0;
}

void reverse(int array[], int i){

    int buf_array[i];

    for(int j=0; j<i; j++){
        array[j] = array[i-j-1];
        //cout << buf_array[j] << endl;
    }

}
