int sum(const int numbers[], int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum = sum + numbers[i];
    }

    return sum;
}