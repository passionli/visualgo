    private void bubbleSort() {
        int[] elements = {1, 8, 2, 7, 3, 6, 4, 5};
        boolean swapped;
        for (int i = 0; i < elements.length; i++) {
            swapped = false;
            for (int j = 0; j < elements.length - 1 - i; j++) {
                if (elements[j] > elements[j + 1]) {
                    int temp = elements[j];
                    elements[j] = elements[j + 1];
                    elements[j + 1] = temp;
                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
    }
