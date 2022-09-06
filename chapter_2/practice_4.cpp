#include <iostream>
#include <string>

using namespace std;

int main(void){

    const int i = 567;

    const int& r = i;

    cout << r <<endl;

    return 0;
}
