void sortGapInsertion(int A[], int first, int last, int gap) {
    int i, j, key;
    for (i = first + gap; i <= last; i += gap) {
        key = A[i];
        for (j = i - gap; j >= first && key < A[j]; j -= gap) {
            A[j + gap] = A[j];
        }
        A[j + gap] = key;
    }
}
