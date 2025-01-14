[0000]    list::list(int lsize=100) {
[0001]        arr = new int[lsize];
[0002]        LMAX = lsize;
[0003]        size = 0;
[0004]    }
[0005]    
[0006]    int
[0007]    list::GetSize() {
[0008]        return size;
[0009]    }
[0010]    
[0011]    int
[0012]    list::GetAt(int position) {
[0013]        if (size<=position) return -1;
[0014]        return arr[position];
[0015]    }
[0016]    
[0017]    int
[0018]    Index(int value) {
[0019]        for (i=0; i<size; i++) if (item == arr[i]) return i;
[0020]        return -1;
[0021]    }
[0022]    
[0023]    void
[0024]    list::Insert(int item) {
[0025]        int i;
[0026]        if (size==LMAX) return;
[0027]        for (i=size; 0<i; i--) {
[0028]            if (item<arr[i-1]) arr[i]=arr[i-1];
[0029]            else break;
[0030]        }
[0031]        arr[i]=item;
[0032]        size++;
[0033]    }
[0034]    
[0035]    void
[0036]    list::Delete(int value) {
[0037]        int i;
[0038]        for (i=0; i<size; i++) if (item == arr[i]) break;
[0039]        if (i==size) return;
[0040]        size--;
[0041]        for (; i<size; i++) arr[i] = arr[i+1];
[0042]    }
[0043]    
