[0000]    class Stack {
[0001]    public:
[0002]        Stack (int s=100) {
[0003]            size = s;
[0004]            storage = new int[size];
[0005]            top = 0;
[0006]        }
[0007]        bool IsEmpty() { return top == 0; };
[0008]        bool IsFull() { return top == size; };
[0009]        bool Push(int el);
[0010]        int Pop();
[0011]        int Top();
[0012]    private:
[0013]        int * storage;
[0014]        int top;
[0015]        int size;
[0016]    };
[0017]    
