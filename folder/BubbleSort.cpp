[0000]    void BubbleSort (int A[], int n) {
[0001]      int i, NumKeys, Sorted;
[0002]      Sorted = FALSE;
[0003]      NumKeys = n;
[0004]      while (!Sorted) {
[0005]        Sorted = TRUE;
[0006]        for (i=0; i<NumKeys; i++) {
[0007]          if (A[i-1]>A[i]) {
[0008]            Swap(&A[i-1], &A[i]);
[0009]            Sorted = FALSE;
[0010]          }
[0011]        }
[0012]      NumKeys--;
[0013]      }
[0014]    }
[0015]    
