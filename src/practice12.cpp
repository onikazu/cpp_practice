// 条件分岐２
# include <iostream>
using namespace std;

int changeToShowa(int a){
    if(a <= 1989 && a >= 1926){
        return a - 1925;
    }else{
        return 0;
    }
}

void Showa(){
    int a;
    
    cout << "生まれ年を入力してください＞";
    cin >> a;
    // 一文で終わるなら{}いらない
    if (changeToShowa(a) == 0){
        cout << "あなたは昭和生まれではありませんね" << endl;
    }else{
        cout << "あなたは昭和" << changeToShowa(a) << "年生まれですね" << endl;
    }
}

int main(){
    Showa();
    Showa();
    return 0;
}