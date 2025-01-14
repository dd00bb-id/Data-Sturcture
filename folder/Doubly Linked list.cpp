[0000]    void
[0001]    dllist::Insert(int item) {
[0002]        if (head_==0) {
[0003]            head_ = new dlnode(item);
[0004]            tail_ = head_;
[0005]            return;
[0006]        }
[0007]        if (item < head_->data_) {
[0008]            dlnode * ptr = new dlnode(item, 0, head_);
[0009]            head_->prev_ = ptr;
[0010]            head_ = ptr;
[0011]            return;
[0012]        }
[0013]        if (tail_->data_ < item) {
[0014]            dlnode * ptr = new dlnode(item, tail_, 0);
[0015]            tail_->next_ = ptr;
[0016]            tail_ = ptr;
[0017]            return;
[0018]        }
[0019]        dlnode * ptr = head_;
[0020]        while (ptr->data_ < item) ptr = ptr->next_;
[0021]        dlnode * nptr = new dlnode(item, ptr->prev_, ptr);
[0022]        ptr->prev_->next_ = nptr;
[0023]        ptr->prev_ = nptr;
[0024]    }
[0025]    
[0026]    void
[0027]    dllist::Delete(int value) {
[0028]    }
[0029]    
[0030]    void
[0031]    dllist::Print() {
[0032]    }
[0033]    
[0034]    void
[0035]    dllist::PrintReverse() {
[0036]    }
[0037]    
[0038]    int main() {
[0039]        dllist lst;
[0040]        int v;
[0041]    
[0042]        for (int i=0; i<7; i++) {
[0043]            cin >> v;
[0044]            lst.Insert(v);
[0045]        }
[0046]        for (int i=0; i<3; i++) {
[0047]            cin >> v;
[0048]            lst.Delete(v);
[0049]        }
[0050]        lst.Print();
[0051]        lst.PrintReverse();
[0052]    }
[0053]    
