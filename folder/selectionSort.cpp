[0000]    void SelectionSort (int A[], int n) {
[0001]      int i, j, MinIndex;
[0002]      for (i=0; i<n-1; i++) {
[0003]        MinIndex = i;
[0004]        for (j=MinIndex+1; j<n; j++) {
[0005]          if (A[MinIndex]>A[j]) MinIndex = j;
[0006]        }
[0007]        if (MinIndex != i) Swap(&A[i], &A[MinIndex]);
[0008]      }
[0009]    }
[0010]    
