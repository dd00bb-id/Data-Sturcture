[0000]    #include "queue.h"
[0001]    
[0002]    queue::queue() {
[0003]        front_ = 0;
[0004]        rear_ = 0;
[0005]    }
[0006]    
[0007]    bool
[0008]    queue::IsEmpty() {
[0009]        if (front_ == 0) return true;
[0010]        return false;
[0011]    }
[0012]    
[0013]    bool
[0014]    queue::IsFull() {
[0015]        return false;
[0016]    }
[0017]    
[0018]    void
[0019]    queue::InsertQ(int el) {
[0020]        // if (IsFull()) return false;
[0021]        if (IsEmpty()) {
[0022]            front_ = rear_ = new node(el);
[0023]            return;
[0024]        }
[0025]        rear_->next_ = new node(el);
[0026]        rear_ = rear_->next_;
[0027]    }
[0028]    
[0029]    int
[0030]    queue::DeleteQ() {
[0031]        if (IsEmpty()) return -1; // ERROR!!
[0032]        int el = front_->data_;
[0033]        node * ptr = front_;
[0034]        front_ = front_->next_;
[0035]        if (front_==0) rear_ = 0;
[0036]        delete ptr;
[0037]        return el;
[0038]    }
[0039]    
