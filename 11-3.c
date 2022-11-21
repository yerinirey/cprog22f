#include <stdio.h>

int get_min_max(int arr[], int *getmin, int *getmax) {
    *getmin = arr[0];
    *getmax = arr[0];
    for (int i = 0; i < 5; i++) {
        if(arr[i] > *getmax) *getmax = arr[i];
        if(arr[i] < *getmin) *getmin = arr[i];      
    }
}

int main() {
    int arr[5] = {10, 2, 6, 8, 4};
    int min, max;

    get_min_max(arr, &min, &max);

    printf("min = %d, max= %d\n", min, max);
    return 0;
}

