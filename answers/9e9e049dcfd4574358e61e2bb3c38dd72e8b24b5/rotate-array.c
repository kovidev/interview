void rotate (int *nums, int numSize, int k) {
    int *temp = new int[numSize];
    for (int i = 0; i < numSize; i++) {
        int pos = k + i;
        if (pos >= numSize)
            pos -= numSize;
        temp[pos] = nums[i];
    }

    for (int i = 0; i < numSize; i++) {
        nums[i] = temp[i];
    }

    delete[] temp;
}
