#include <iostream>

using namespace std;

int main(void){

int n = 135;
cout << " n : " << n << "\n";
cout << "&n  : " << &n << "\n";

// ポインタptrにnのアドレスを代入（これでnの値を参照できる）
int *ptr = &n;
cout << "ptr : " << ptr << "adress\n";
cout << "*ptr : " << *ptr << '\n';
// *演算子はそのアドレスがさすオブジェクトそのものとなる
// 今回は int n　となる

return 0;

}