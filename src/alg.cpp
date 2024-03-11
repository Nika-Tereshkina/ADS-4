// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value)
{
    int counter = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value) {
                counter++;
            }
            else if (arr[i] + arr[j] > value) {
                break;
            }
        }
    }
    return counter;
}
int countPairs2(int *arr, int len, int value)
{
    int counter = 0;
    int left = 0;
    int right = len - 1;
    while (left < right) {
        int summa = arr[left] + arr[right];
        if (summa == value) {
            counter++;
            left++;
            right--;
        }
        else if (summa < value) {
            left++;
        }
        else {
            right--;
        }
    }
    return counter;
}
int countPairs3(int *arr, int len, int value)
{
    int countук = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value) {
                counter++;
            }
        }
    }    
    return counter;
}
