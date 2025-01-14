[0000]    class node {
[0001]    public:
[0002]        node(int d, node * n=0) {
[0003]            next_=n;
[0004]            data_=d;
[0005]        }
[0006]    // private: 코딩상의 편의를 위하여 모두 public으로 한다.
[0007]        node * next_;
[0008]        int data_;
[0009]    };
[0010]    
[0011]    class list {
[0012]    public:
[0013]        list();
[0014]        int GetSize();
[0015]        int GetAt(int index);
[0016]        int Index(int key);
[0017]        void Insert(int item);
[0018]        void Delete(int key);
[0019]        int Find(int key);
[0020]    private:
[0021]        node * lst_;
[0022]    };
[0023]    
