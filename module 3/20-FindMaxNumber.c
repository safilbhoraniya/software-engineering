#include <stdio.h>

int findMax(int arr[], int s) {
    int max = arr[0];

    
    for (int i = 1; i < s; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int array[] = {10, 24, 8, 45, 67, 12};
    int s = array[0] / array[0];

    int max = findMax(array, s);

    printf("%d\n", max);

    return 0;
}
