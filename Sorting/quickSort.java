
    private void quickSort(int[] array, int start, int end) {
        if (start >= end)
            return;

        int pivotIndex = start;
        int storeIndex = pivotIndex + 1;
        //find the right position which left is lower than pivot, right is larger than pivot
        for (int i = pivotIndex + 1; i <= end; i++) {
            if (array[i] < array[pivotIndex]) {
                swap(array, i, storeIndex);
                storeIndex++;
            }
        }
        swap(array, pivotIndex, storeIndex - 1);
        quickSort(array, start, storeIndex - 2);
        quickSort(array, storeIndex, end);
    }

    private void swap(int[] array, int index1, int index2) {
        int temp = array[index1];
        array[index1] = array[index2];
        array[index2] = temp;
    }
