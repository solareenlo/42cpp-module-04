# 42cpp-module-04

### ex03
- Abstract と Interface の組合せ．

### ex02
- Interface
  - [抽象クラスとインターフェース](https://programming-place.net/ppp/contents/cpp/language/029.html)
    - interface は `can-do` 関係，abstract は `is-a` 関係．
    - インターフェースとは，純粋仮想関数だけで構築された抽象クラスの特別なバージョンのこと．
    - インターフェースは，can-do 関係と呼ばれる関係性を構築する．
    - インターフェースは，そこから派生したクラスが「何ができるか」を表現するもの．
  - [C++ インターフェースの実現方法](https://marycore.jp/prog/cpp/interface-class-and-duck-typing/)
    - [純粋仮想関数](https://marycore.jp/prog/cpp/abstract-class-with-pure-virtual-function/)
    - [virtualデストラクタ](https://marycore.jp/prog/cpp/virtual-destructor/)
- [基本クラスを指すポインタは、その派生クラスも指すことができる](http://www.ced.is.utsunomiya-u.ac.jp/lecture/2012/prog/p3/kadai3/virtualfunc2.php)
    ```c++
    class Base {
    public:
        int m_1;
        int m_2;
        int m_3;
        void function() { ... }
    };
    class Derived : public Base {
    public:
       int m_4;
       int m_5;
       void function() { ... } //Baseのメンバ関数を再定義
    };
    ```
    この時に，Derived クラスのオブジェクトを指すのに，Base クラスを指すポインタを使用しても良いということ．
    ```c++
    Base* pb = new Base(); //OK
    Derived* pd = new Derived(); //当然これもOK
    Base* pb2 = new Derived();  //そしてこれもOK
    Derived* pd2 = new Base();  //これは NG!
    ```
- [C dynamically growing array](https://stackoverflow.com/questions/3536153/c-dynamically-growing-array)
    ```c
    typedef struct {
      int *array;
      size_t used;
      size_t size;
    } Array;

    void initArray(Array *a, size_t initialSize) {
      a->array = malloc(initialSize * sizeof(int));
      a->used = 0;
      a->size = initialSize;
    }

    void insertArray(Array *a, int element) {
      if (a->used == a->size) {
        a->size *= 2;
        a->array = realloc(a->array, a->size * sizeof(int));
      }
      a->array[a->used++] = element;
    }

    void freeArray(Array *a) {
      free(a->array);
      a->array = NULL;
      a->used = a->size = 0;
    }
    ```
- [delete前のNULLチェック](http://ges.blog.shinobi.jp/c--%E5%9F%BA%E7%A4%8E/delete%E5%89%8D%E3%81%AEnull%E3%83%81%E3%82%A7%E3%83%83%E3%82%AF)
  - C++の規格で "if the value of the operand of delete is the null pointer the operation has no effect." となっているので，NULL チェックする必要はない．
- [deleteとdelete[ ]の違い](https://superactionshootinggame4.hatenablog.com/entry/2018/01/26/135038)
  - `delete` は配列オブジェクトの先頭要素のデストラクタしか呼ばない．
  - `delete[]` は配列の全要素のデストラクトを呼ぶ．
- [Dynamic allocation with DOUBLE POINTERS](https://stackoverflow.com/questions/5721728/dynamic-allocation-with-double-pointers)
    ```c++
    Toy **ptr = new Toy *[n];
    ```
- [new, new[]](https://programming-place.net/ppp/contents/cpp/language/014.html)
    ```c++
    new 型名; // デフォルトコンストラクが呼ばれる
    new 型名(実引数の並び); // 引数ありのコンストラクタが呼ばれる
    new 型名[要素数]; // 要素数個の動的メモリ割り当てが行われる
    new 型名*[要素数]; // 要素数個のポインタの動的メモリ割り当てが行われる
    ```


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
