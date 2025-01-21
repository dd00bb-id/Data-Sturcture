[0000]    void InsertionSort(int A[], int n) {
[0001]      int i, j, value;
[0002]      for (i=2; i<=n; i++) {
[0003]        value = A[i];
[0004]        j = i;
[0005]        while (A[j-1]>value) {
[0006]          A[j] = A[j-1];
[0007]          j--;
[0008]        }
[0009]      a[j] = value;
[0010]      }
[0011]    }
[0012]    
