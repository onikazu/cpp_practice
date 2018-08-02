// global var and internal var
#include <iostream>
using namespace std;

int a = 0;

void test(){
    int b = 0;
    a++;
    b++;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    
    // グローバル変数であっても関数宣言後に宣言したものは使えない。
    // cout << "c:" << c << endl;
    
}

int c = 0;

int main(){
    // 内部変数b は毎回初期化されてしまう。
    test();
    test();
    test();
    return 0;
}