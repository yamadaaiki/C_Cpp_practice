#include <iostream>
#include <string>

using namespace std;

class vector3d{

    float x = 3.0;
    float y = 4.0;
    float z = 5.0;

public:
    vector3d();

    void showVector() const;
};

vector3d::vector3d(){
}

void vector3d::showVector() const{
    cout << "x,y,z : "<< x << "," << y << "," << z <<endl; 
}


int main(void){

    vector3d V;

    V.showVector();

    return 0;
}
