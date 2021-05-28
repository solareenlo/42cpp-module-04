# 42cpp-module-04

### ex02
- Interface
  - [C++ インターフェースの実現方法](https://marycore.jp/prog/cpp/interface-class-and-duck-typing/)
    - [virtualデストラクタ](https://marycore.jp/prog/cpp/virtual-destructor/)
    - [C++で抽象クラスを実現する方法【純粋仮想関数】](https://marycore.jp/prog/cpp/abstract-class-with-pure-virtual-function/)

### ex01
- Abstract
  - [なぜ抽象クラス(Abstract)を実装するのか](https://qiita.com/aiko_han/items/e8ddce85188970fd77da)

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

- ポリモーフィズム
  - オーバーライド，オーバーロードのことを，総称して，ポリモーフィズム (Polymorphism) と言う．
  - [一週間で身につくC++言語の基本 ポリモーフィズム](https://cpp-lang.sevendays-study.com/day7.html)
