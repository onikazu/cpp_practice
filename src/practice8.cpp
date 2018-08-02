// void

#include <iostream>
using namespace std;

void add(int a, int b){
    cout << a << '+' << b << '=' << a+b << endl;
}

int main(){
    add(1, 4);
    add(4, 10000);
    add(4987, 234567);
    return 0;
}