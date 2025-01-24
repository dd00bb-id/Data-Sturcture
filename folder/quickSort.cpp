[0000]    void quicksort(int list[ ], int low, int high) {
[0001]        int pivot_pos;
[0002]        if (low ＜ high) {
[0003]            pivot_pos = partition(list, low, high);
[0004]            quicksort(list, low, pivot_pos-1);
[0005]            quicksort(list, pivot_pos+1, high);
[0006]        }
[0007]    }
[0008]    
[0009]    int partition(int list[ ], int low, int high) {
[0010]        int i, j = low;
[0011]        for (i = low+1; i <= high; i++)
[0012]            if (list[i] ＜ list[low]) {
[0013]                j++;
[0014]                list[i]와 list[j] 교환;
[0015]            }
[0016]        list[low]와 list[j] 교환;
[0017]        return j;
[0018]    }
[0019]  
