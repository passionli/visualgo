
    private int[] binaryMaxHeapSort(int[] elements) {
        int[] dst = new int[elements.length];
        int size = 0;
        for (int i = 0; i < elements.length; i++) {
            //insert
            dst[size] = elements[i];
            //adjust
            for (int j = size; j > 0; ) {
                int parentIndex = (j - 1) >> 1;
                if (dst[parentIndex] < dst[j]) {
                    swap(dst, parentIndex, j);
                }
                j = parentIndex;
            }
            size++;
        }

        int[] output = new int[elements.length];
        for (int i = 0; i < output.length; i++) {
            output[i] = extractMax(dst, --size);
        }

        return output;
    }

    private int extractMax(int[] dst, int size) {
        int max = dst[0];
        dst[0] = dst[size--];
        for (int i = 0; i < size; i++) {
            int leftChildIndex = (i << 1) + 1;
            if (leftChildIndex + 1 > size)
                break;
            int largerChildrenIndex = dst[leftChildIndex] > dst[leftChildIndex + 1] ?
                    leftChildIndex : leftChildIndex + 1;
            if (dst[i] < dst[largerChildrenIndex]) {
                swap(dst, i, largerChildrenIndex);
            }
        }

        return max;
    }

    private void swap(int[] array, int index1, int index2) {
        int temp = array[index1];
        array[index1] = array[index2];
        array[index2] = temp;
    }
