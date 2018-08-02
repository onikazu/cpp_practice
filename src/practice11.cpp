// 条件分岐

# include <iostream>
using namespace std;

void birthday(){
    int a;
    
    cout << "あなたの誕生月を教えてください＞";
    
    cin >> a;
    
    if(a <= 12 && a >= 1){
        cout << "なるほど～" << a << "月か〜〜"<< endl;
    }else{
        cout << "なめとんのか！！" << endl;
    }
}

int main(){
    birthday();
    birthday();
    birthday();
    return 0;
}