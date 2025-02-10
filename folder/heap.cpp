[0000]    minheap::minheap(int size) {
[0001]      hsize_ = size;
[0002]      last_ = 0;
[0003]      storage_ = new int[100];
[0004]    };
[0005]    
[0006]    minheap::~minheap::( ) {
[0007]      delete storage_;
[0008]    };
[0009]    
[0010]    bool minheap::IsEmpty() {
[0011]      return last_==0;
[0012]    };
[0013]    
[0014]    bool minheap::IsFull() {
[0015]      return last_==hsize_;
[0016]    };
[0017]    
[0018]    void minheap::InsertMH(int el) {
[0019]      storage_[last_++] = el;
[0020]      UpHeap(last-1);
[0021]    };
[0022]    
[0023]    void minheap::UpHeap(int cur) {
[0024]      int par = (cur-1)/ 2;
[0025]      while ((cur!=0) && (storage_[cur] < storage_ [par])) {
[0026]        Swap(cur, par);
[0027]        cur = par;
[0028]        par = (cur-1)/2;
[0029]      }
[0030]    };
[0031]    
[0032]    int minheap::DeleteMH() {
[0033]      int el = storage_[0];
[0034]      storage_[0] = storage_[--last_];
[0035]      DownHeap(0);
[0036]      return el;
[0037]    };
[0038]    
[0039]    void minheap::DownHeap(int cur) {
[0040]      while ((cur*2+1)<last_) {
[0041]        int mc = cur*2+1; // mc=lc;
[0042]        if ((cur*2+2<last_)&&(storage_[mc]>storage_[cur*2+2])) mc = cur*2+2; // mc = rc;
[0043]        if (storage_[cur]<storage_[mc]) break;
[0044]        Swap(cur, mc);
[0045]        cur = mc;
[0046]      }
[0047]    };
[0048]   
