#include <iostream>

using namespace std;

void TwoNumberSumMul(int x, int y, int* sum, int* mul){

    //sumはポインタで*演算子であるから，sumというオブジェクトに計算結果をそのまま代入
    //mulも同様
    *sum = x + y;
    *mul = x * y;
    
    return;
}

int main(void){

    int a, b;

    cout << "input two number : \n";
    cin >> a;
    cin >> b;

    int wa = 0, seki = 0;

    //仮引数sumはポインタなのでwaのアドレスを代入
    //仮引数mulもポインタなのでsekiのアドレスを代入
    TwoNumberSumMul(a, b, &wa, &seki);

    cout << "sum is " << wa << "\n";
    cout << "mul is " << seki << "\n";

    return 0;

}