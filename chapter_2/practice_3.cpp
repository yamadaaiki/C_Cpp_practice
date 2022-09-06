#include <iostream>
#include <string>

using namespace std;

int main(void){

    int i = 0;

    int& j = i;

    j = 42;

    cout << i <<endl;

    return 0;
}
