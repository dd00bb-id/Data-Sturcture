[0000]    class list {
[0001]    public:
[0002]        list(int lsize=100);
[0003]        int GetSize();
[0004]        int GetAt(int index);
[0005]        int Index(int key);    // index Rank(key item);
[0006]        void Insert(int item);
[0007]        void Delete(int key);
[0008]        int Find(int value);
[0009]    private:
[0010]        int LMAX;
[0011]        int * arr;
[0012]        int size;
[0013]    };
[0014]    
