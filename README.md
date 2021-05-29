# 42cpp-module-04

### ex02
- Interface
  - [抽象クラスとインターフェース](https://programming-place.net/ppp/contents/cpp/language/029.html)
    - インターフェースとは，純粋仮想関数だけで構築された抽象クラスの特別なバージョンのこと．
    - インターフェースは，can-do 関係と呼ばれる関係性を構築する．
    - インターフェースは，そこから派生したクラスが「何ができるか」を表現するもの．
  - [C++ インターフェースの実現方法](https://marycore.jp/prog/cpp/interface-class-and-duck-typing/)
    - [純粋仮想関数](https://marycore.jp/prog/cpp/abstract-class-with-pure-virtual-function/)
    - [virtualデストラクタ](https://marycore.jp/prog/cpp/virtual-destructor/)

### ex01
- Abstract (抽象クラス)
  - [抽象クラスとインターフェース](https://programming-place.net/ppp/contents/cpp/language/029.html)
    - 抽象クラスとは，純粋仮想関数を含んだクラスのこと．
    - 純粋仮想関数とは，中身のない仮想関数のこと．
    - 抽象クラスは，公開継承して使うのであれば，is-a 関係を構築する機能のこと．
  - [なぜ抽象クラス(Abstract)を実装するのか](https://qiita.com/aiko_han/items/e8ddce85188970fd77da)
  - 抽象クラスの特徴
    - 抽象クラスを継承したサブクラスは、抽象クラスにある抽象メソッドのオーバーライド必須
    - サブクラスでコンストラクタを記述しなければならない
    - 直接インスタンス化できない
    - 多重継承はできない

### ex00
- Override
  - [関数のオーバーライド](http://wisdom.sakura.ne.jp/programming/cpp/cpp31.html)
  - [C++ でデストラクタを virtual にしなくてはならない条件と理由](https://www.yunabe.jp/docs/cpp_virtual_destructor.html)
  - virtual なメソッドがあるなら、子クラスのポインタは必ず親クラスのポインタとして使用される．
  - 逆に言うと，親クラスのメンバ関数に virtual が無いと，子クラスのメンバ関数を使用する時には，親クラスのメンバ関数が使用される．
  - 親クラスのメンバ関数が使用されるので，それを子クラスのメンバ関数で上書きすると言うこと．
  - デストラクタが virtual でない場合，親クラスの型のポインタを delete した際には親クラスのデストラクタしか呼ばれない．
    - なぜなら，デストラクタは、派生クラスから基本クラスへ向かって順番に呼び出される．
    - すなわち，派生クラスから順にデータを解放していくことを表す．
    - もし，デストラクタが仮想関数を呼び出した場合，派生クラスの情報は，すでに崩壊している可能性があるため．
    - ので，親クラスのデストラクタに virtual を付けることで，

- Polymorphism
  - オーバーライド，オーバーロードのことを，総称して，ポリモーフィズム (Polymorphism) と言う．
  - [一週間で身につくC++言語の基本 ポリモーフィズム](https://cpp-lang.sevendays-study.com/day7.html)
