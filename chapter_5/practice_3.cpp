#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> empty;
    cout << "empty.size() : " << empty.size() << endl;

    vector<int> array = {10, 20, 30, 40, 50};
    cout << "array.size() : " << array.size() << endl;

    for (int e : array){
        cout << e << endl;
    }

    return 0;
}