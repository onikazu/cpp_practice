# c++に関するtips
以下のurlのc++講座をもとにここではプログラムを記述している。
http://www7b.biglobe.ne.jp/~robe/cpphtml/


## 実行方法
ビルド→実行という流れ
ビルド方法（例：practice1.cpp）
以下のようにコードをターミナルに打つ

~~~
$ cd cpp_practice/src
$ g++ -o <実行ファイルの名称> practice1.cpp　# <実行ファイルの名称>の名前のついた実行ファイルがsrc下にできる。
$ ./<実行ファイルの名称>
~~~
<実行ファイルの名称>にはどんなものでも入れていい？

## cppファイルテンプレート
基本的に以下のようなテンプレートにcppは書いていく。# include部分が参考資料では古い情報になっているので注意

~~~template.cpp
#include <iostream>
using namespace std;


int main()
{
    ＜実行するプログラム文＞
}

~~~