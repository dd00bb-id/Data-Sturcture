[0000]    class dlnode { // 이름의 충돌이 없다면, 이름을 node로 수정해도 좋음
[0001]    public:
[0002]        dlnode(int d, dlnode *p=0, dlnode *n=0) {
[0003]            prev_ = p;
[0004]            next_ = n;
[0005]            data_ = d;
[0006]        }
[0007]        dlnode * prev_;
[0008]        dlnode * next_;
[0009]        int data_;
[0010]    };
[0011]    
[0012]    class dllist { // 이름의 충돌이 없다면, 이름을 list로 수정해도 좋음
[0013]    public:
[0014]        dllist();
[0015]    //    int GetSize();
[0016]        void Insert(int item);
[0017]        void Delete(int value);
[0018]    //    int GetAt(int position);
[0019]    //    int Index(int value);    // index Rank(key item);
[0020]        int Find(int key);
[0021]        void Print();
[0022]        void PrintReverse();
[0023]    private:
[0024]        dlnode * head_;
[0025]        dlnode * tail_;
[0026]    };
[0027]  
