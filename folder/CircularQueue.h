[0000]    #define MAXQ 100
[0001]    
[0002]    class Queue {
[0003]    public:
[0004]        Queue();
[0005]        bool IsEmpty() { return (rear_ == front_); }
[0006]        bool IsFull() { return ((rear_+1) % MAXQ == front_); }
[0007]        bool InsertQ(int el);
[0008]        int DeleteQ();
[0009]    private:
[0010]        int arr_[MAXQ];
[0011]        int front_;
[0012]        int rear_;
[0013]    };
[0014]    
