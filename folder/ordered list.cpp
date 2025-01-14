[0000]    list::list() {
[0001]        lst_ = 0;
[0002]        // size_= 0;
[0003]    }
[0004]    
[0005]    int
[0006]    list::GetSize() {
[0007]        node * ptr = lst_;
[0008]        int count=0;
[0009]        while (ptr!=0) {
[0010]            ptr = ptr->next_;
[0011]            count++;
[0012]        }
[0013]        return count;
[0014]    }
[0015]    
[0016]    int
[0017]    list::GetAt(int index) {
[0018]        node * ptr=lst_;
[0019]        for (int i=0; i<index; i++) {
[0020]            if (ptr==0) return -1;
[0021]            ptr = ptr->next_;
[0022]        }
[0023]        return ptr->data_;
[0024]    }
[0025]    
[0026]    int
[0027]    list::Index(int key) {
[0028]        node * ptr=lst_;
[0029]        int idx=0;
[0030]        while (ptr!=0) {
[0031]            if (ptr->data_==key) return idx;
[0032]            ptr = ptr->next_;
[0033]            idx++;
[0034]        }
[0035]        return -1;
[0036]    }
[0037]    
[0038]    void
[0039]    list::Insert(int item) {
[0040]        if (lst_==0) {
[0041]            lst_ = new node(item, 0);
[0042]            return;
[0043]        }
[0044]        if (item < lst_->data_) {
[0045]            lst_ = new node(item, lst_);
[0046]            return;
[0047]        }
[0048]        node * ptr = lst_;
[0049]        while (ptr->next_!=0 && ptr->next_->data_ < item) {
[0050]            ptr = ptr->next_;
[0051]        }
[0052]        ptr->next_ = new node(item, ptr->next_);
[0053]    }
[0054]    
[0055]    /*
[0056]    void
[0057]    list::Insert(int item) {
[0058]        if (lst_==0) {
[0059]            lst = new node(item, 0);
[0060]            return;
[0061]        }
[0062]        if (item < lst_->data) {
[0063]            lst = new node(item, lst);
[0064]            return;
[0065]        }
[0066]        node * ptr = lst_->next_;
[0067]        node * pptr = lst_;
[0068]        while (ptr!=0 && ptr->data < item) {
[0069]            pptr = ptr;
[0070]            ptr = ptr->next;
[0071]        }
[0072]        pptr->next = new node(item, ptr->next);
[0073]    }
[0074]    */
[0075]    
[0076]    void
[0077]    list::Delete(int key) {
[0078]        node * ptr = lst_;
[0079]        if (lst_==0) return;
[0080]        if (lst_->data_==key) {
[0081]            lst_ = lst_->next_;
[0082]            delete ptr;
[0083]            return;
[0084]        }
[0085]        while (ptr->next_!=0 && ptr->next_->data_ != key) {
[0086]            ptr = ptr->next_;
[0087]        }
[0088]        if (ptr->next_==0) return;
[0089]        node * dptr = ptr->next_;
[0090]        ptr->next_ = ptr->next_->next_;
[0091]        delete dptr;
[0092]    }
[0093]    
[0094]    /*
[0095]    int
[0096]    list::Delete(int key) {
[0097]        node * ptr = lst_;
[0098]        int item;
[0099]        if (lst_==0) return -1;
[0100]        if (key == lst_->data) {
[0101]            lst_ = lst_->next_;
[0102]            item = ptr->data_;
[0103]            delete ptr;
[0104]            return item;
[0105]        }
[0106]        while (ptr->next_!=0 && ptr->next_->data_ != item) {
[0107]            ptr = ptr->next_;
[0108]        }
[0109]        if (ptr->next_==0) return -1;
[0110]        node * dptr = ptr->next_;
[0111]        ptr->next_ = ptr->next_->next_;
[0112]        item = dptr->data_;
[0113]        delete dptr;
[0114]        return item;
[0115]    }
[0116]    */
[0117]    
[0118]    #include <iostream>
[0119]    using namespace std;
[0120]    
[0121]    int main() {
[0122]        list * lst = new list();
[0123]        lst->Insert(2);
[0124]        lst->Insert(3);
[0125]        lst->Insert(5);
[0126]        lst->Insert(7);
[0127]        cout << lst->GetSize();
[0128]    }
[0129]    
