// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    int counter = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value) {
                counter++;
            }
        }
    }
    return counter;
}
int countPairs2(int *arr, int len, int value) {
    int counter = 0;
    int start = 0;
    int end = len - 1;
    while (start < end) {
        int summa = arr[start] + arr[end];
        if (summa == value) {
            counter++;
            int i = start + 1;
            while (i < end && arr[i] == arr[i - 1]) {
                i++;
            }
            start = i;
            end--;
            } else if (summa < value) {
                start++;
            } else {
            end--;
        }
    }
    return counter;
}
int countPairs3(int *arr, int len, int value) {
    int counter = 0;
    for (int i = 0; i < len - 1; i++) {
        int left = i + 1;
        int right = len - 1;
        while (left <= right) {
            int midle = left + (right - left) / 2;
            if (arr[i] + arr[midle] == value) {
                counter++;
                int j = midle + 1;
                while (j <= right && arr[midle] == arr[j]) {
                    counter++;
                    j++;
                }
                break;
                } else if (arr[i] + arr[midle] < value) {
                    left = midle + 1;
                } else {
                    right = midle - 1;
            }
        }
    }
    return counter;
}
