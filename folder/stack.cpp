[0000]    #include "stack.h"
[0001]    
[0002]    Stack::Stack() {
[0003]        top=0;
[0004]    }
[0005]    
[0006]    bool Stack::IsEmpty() {
[0007]        return (top==0);
[0008]    }
[0009]    
[0010]    bool Stack::IsFull() {
[0011]        return false;
[0012]    }
[0013]    
[0014]    bool Stack::Push(int el) {
[0015]        if (IsFull()) return false;
[0016]        top=new node(el, top);
[0017]        return true;
[0018]    }
[0019]    
[0020]    int Stack::Pop() {
[0021]        if (IsEmpty()) return 0;
[0022]        node * ptr = top;
[0023]        top = top->next;
[0024]        int el = ptr->data;
[0025]        delete ptr;
[0026]        return el;
[0027]    }
[0028]    
[0029]    int Stack::Top() {
[0030]        if (IsEmpty()) return 0;
[0031]        return top->data;
[0032]    }
[0033]    
