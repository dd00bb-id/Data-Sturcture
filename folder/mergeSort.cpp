[0000]    void mergesort(int list[ ], int low, int high) {
[0001]        int middle;
[0002]        if (low ＜ high) {
[0003]            middle =(low + high)/2;
[0004]            mergesort(list, low, middle);
[0005]            mergesort(list, middle+1, high);
[0006]            merge(list, low, middle, high);
[0007]        }
[0008]    }
[0009]    
[0010]    void merge(int list[ ], int low, int mid, int high) {
[0011]        int n1 = low, n2 = mid+1, s = low, sorted[MAX_SIZE], i;
[0012]        while (n1 <= mid && n2 <= high) {
[0013]            if (list[n1]<=list[n2]) sorted[s++] = list[n1++];
[0014]            else sorted[s++] = list[n2++];
[0015]        }
[0016]        if (n1 ＞ mid) while (n2 <= high) sorted[s++] = list[n2++];
[0017]        else while (n1 <= mid) sorted[s++] = list[n1++];
[0018]        for (i = low; i <= high; i++) list[i] = sorted[i];
[0019]    }
[0020]    
