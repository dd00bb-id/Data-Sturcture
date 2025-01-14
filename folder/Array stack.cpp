[0000]    #include stack.h
[0001]    
[0002]    bool Stack::Push(int el) {
[0003]        if (IsFull()) return false;
[0004]        storage[top++] = el;
[0005]        return true;
[0006]    }
[0007]    
[0008]    int Stack::Pop() {
[0009]        if (IsEmpty()) return 0;
[0010]        return storage[--top];
[0011]    }
[0012]    
[0013]    int Stack::Top() {
[0014]        if (IsEmpty()) return 0;
[0015]        return storage[top-1];
[0016]    }
[0017]    
