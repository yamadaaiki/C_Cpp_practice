#include <iostream>
#include <string>

using namespace std;

int sum(int lhs, int rhs);

int main(void){

    cout << sum(10, 5) << endl;;

    return 0;
}

int sum(int lhs, int rhs){
    return lhs + rhs;
}
