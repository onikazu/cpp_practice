// 0 はfalse扱い
// その他の数字はtrue扱い
// vice versa
// false は 0
// true は1 扱い

// 条件分岐3
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
    if (changeToShowa(a)){
        cout << "あなたは昭和" << changeToShowa(a) << "年生まれですね" << endl;
    }else{
        cout << "あなたは昭和生まれではありませんね" << endl;
    }
}

void Point(){
    int a;
    cout << "テスト何点だった？>";
    cin >> a;
    cout << "へえ" << a * (a <= 100 && a >= 0) << "点だったんだー" << endl;
        
}


int main(){
    Showa();
    Showa();
    Point();
    return 0;
}