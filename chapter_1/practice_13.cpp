#include <iostream>

using namespace std;

void ShowValue(float f){
    
    cout << f << endl;

    return;
}

int main(void){
    float i = 42.195f;
    cout << i << '\n';
    ShowValue(i);

    return 0;
}