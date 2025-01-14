[0000]    #include "node.h"
[0001]    class queue {
[0002]    public:
[0003]        queue();
[0004]        bool IsEmpty();
[0005]        bool IsFull();
[0006]        void InsertQ(int el);
[0007]        int DeleteQ();
[0008]    private:
[0009]        node * front_;
[0010]        node * rear_;
[0011]    };
[0012]    
